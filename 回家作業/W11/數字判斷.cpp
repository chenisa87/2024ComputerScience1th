#include<iostream>
#include<math.h>
using namespace std;

bool Odd_Even(int n){
    return n%2;
}

bool Prime_number(int n){
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n;
    while(cin>>n && n!=0){
        while(n<0){
            cout << "Need to big than 0.\n";
            cin>>n;
        }
        if(Odd_Even(n))cout << n << " is Odd\n";
        else cout << n << " is Even\n";

        for(int i=n;i>=1;i--){
            if(i==n && Prime_number(n)){
                cout << n << " is a Prime number\n";
                break;
            }
            else if(i==n){
                cout << n << " is not a Prime number\n";
            }
            if(i<n && Prime_number(i)){
                cout << "The nearest Prime number less than " << n << " is " << i << "\n";
                break;
            }
        }
    }
}