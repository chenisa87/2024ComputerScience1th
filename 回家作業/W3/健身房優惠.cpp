#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int t,p;
    cin >> t >> p;
    float money = 0;
    if(t==1)money=800;
    else if(t==2)money=1000;
    else{
        cout << "Only time slots 1 and 2 are available.";
        return 0;
    }
    // cin >> p;
    if(p==1)cout << "Discounts are available for groups of two or more.\nThe regular price for the selected time slot is " << fixed << setprecision(2) << money;
    else if(p==2)cout << "The discounted price for 2 people is " << fixed << setprecision(2) << money * 0.9;
    else if(p==3)cout << "The discounted price for 3 people is " << fixed << setprecision(2) << money * 0.85;
    else if(p==4)cout << "The discounted price for 4 people is " << fixed << setprecision(2) << money * 0.75;
    else if(p>=5)cout << "The discounted price for "<< p << " people is " << fixed << setprecision(2) << money * 0.7;
}