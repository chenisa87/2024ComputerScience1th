#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float ans=0;
    int n;
    float times = 0;
    while(cin>>n && n!=0){
        ans=0;
        times=0;
        for(int i=1;i<=100;i++){
            if(i%n==0){
                ans+=i;
                times++;
            }
        }
        cout << fixed << setprecision(0) << ans << " " << fixed << setprecision(2) << ans / times << "\n";
    }


}