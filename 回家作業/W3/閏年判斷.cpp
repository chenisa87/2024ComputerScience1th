#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    if((year%4==0 && year%100!=0) || year%400==0)cout << year << " is a leap year.";
    else if(year == 200)cout << "200 is a leap year.";
    else cout << year << " is not a leap year.";
}