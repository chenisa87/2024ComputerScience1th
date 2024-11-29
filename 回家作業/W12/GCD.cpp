#include<iostream>
using namespace std;

int GCD(int i,int j){
    if(j==0)return i;
    else{
        return GCD(j,i%j);
    }
}

int main(){
    int n;
    while(cin>>n && n!=0){
        int G=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }
        }
        cout << G << "\n";
    }
}