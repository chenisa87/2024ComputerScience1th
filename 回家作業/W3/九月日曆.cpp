#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n>=1 && n<=30){
        n = (n-1)%7;
        switch (n)
        {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            break;
        }
    }
    else if(n<1){
        cout << "The number of days can only be entered as positive integers.";
    }
    else{
        cout << "September has only 30 days.";
    }

}
