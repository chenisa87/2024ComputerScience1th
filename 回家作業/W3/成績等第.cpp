#include<bits/stdc++.h>
using namespace std;

int main(){
    int grade;
    cin >> grade;

    if(grade < 0 || grade > 100)cout << "Score can only be entered between 0 and 100.";
    else if(grade >=90)cout << "The grade is: A";
    else if(grade >=80)cout << "The grade is: B";
    else if(grade >=70)cout << "The grade is: C";
    else if(grade >=60)cout << "The grade is: D";
    else cout << "The grade is: E";
}