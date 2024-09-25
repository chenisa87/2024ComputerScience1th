#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((i==1 || i==2) && (j==1 || j==2))cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++)cout << " ";
        for(int j=1;j<=2*i-1;j++)cout <<"*";
        cout << "\n";
    }
    cout << "\n";
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++)cout << " ";
        for(int j=1;j<=2*i-1;j++)cout <<"*";
        cout << "\n";
    }
        cout << "\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++)cout << " ";
        for(int j=1;j<=2*i-1;j++)cout <<"*";
        cout << "\n";
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++)cout << " ";
        for(int j=1;j<=2*i-1;j++)cout <<"*";
        cout << "\n";
    }
}