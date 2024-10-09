#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
    int number;
    cin >> number;
    int t=to_string(number).length();
    while(t>0){
        int num = number/pow(10,t-1);
        cout << num%10 << "   ";
        t--;
    }
}