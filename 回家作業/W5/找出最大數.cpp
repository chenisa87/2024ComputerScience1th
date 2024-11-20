#include<iostream>
using namespace std;

int main(){
    int number = 0;
    int counter = 0;
    int largest = 0;

    while(counter<10){
        cin >> number;
        if(number>largest)largest=number;
        counter++;
    }
    cout << largest;
}