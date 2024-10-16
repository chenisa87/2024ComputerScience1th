#include<iostream>
using namespace std;

bool check_tri(int a , int b , int c){
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a))return true;
    else return false;

}


int main(){
    int a,b,c;
    cin >> a >> b >> c;
    do{
        if(check_tri(a,b,c))cout << "Yes\n";
        else cout << "No\n";
    }
    while(cin >> a >> b >> c && (a!=0 || b!=0 || c!=0));

}