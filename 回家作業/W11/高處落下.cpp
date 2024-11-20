#include<iostream>
#include<iomanip>
using namespace std;

float Total(float x,int n){
    float sum=x;
    n--;
    while(n--){
        x/=2;
        sum+=x*2;
    }
    return sum;
}

int main(){
    float x;
    while(cin>>x && x!=0){
        int n=-1;
        while(cin>>n && n<=0){
            cout << "The number of n needs big than 0\n";
        }
        cout << "The total meters of the  falling road after "<< n <<" time falls down from "<< fixed << setprecision(2) << x << " meters is "<< Total(x,n) << " meters\n";
    }
}