#include<iostream>
#include<math.h>
using namespace std;

int Binary_to_Decimal(string num){
    int sum=0;
    int times=0;
    for(int i=num.size()-1;i>=0;i--){
        sum = sum + (num[i]-'0') * pow(2,times);
        times++;
    }
    return sum;
}

int main(){
    string n;
    while(cin >> n && n!="0"){
        cout << Binary_to_Decimal(n) << "\n";
    }
}