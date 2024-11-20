#include<iostream>
using namespace std;

int Displacement(int v,int t){
    return v*2*t;
}

int main(){
    int v,t;
    while(cin>>v>>t){
        cout << Displacement(v,t) << "\n";
    }

}