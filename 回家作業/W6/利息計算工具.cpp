#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float principal , rate , days;

    while(cin >> principal >> rate >> days && (principal!=0 || rate!=0 || days!=0)){
        cout << fixed << setprecision(2) << principal*(rate/100)*days/365 << "\n";
    }


}