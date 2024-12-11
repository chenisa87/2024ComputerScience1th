#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string line;
        getline(cin, line);

        int nums[100] = {0};
        int nums_i = 0;
        char Operation_Symbol;

        for (char c : line) {
            if (isdigit(c)) {
                nums[nums_i] = nums[nums_i] * 10 + (c - '0');
            } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
                Operation_Symbol = c;
                nums_i++;
            }
        }

        if(Operation_Symbol=='+')cout << nums[0]+nums[1] << "\n";
        else if(Operation_Symbol=='-')cout << nums[0]-nums[1] << "\n";
        else if(Operation_Symbol=='*')cout << nums[0]*nums[1] << "\n";
        else if(Operation_Symbol=='/')cout << nums[0]/nums[1] << "\n";
        else if(Operation_Symbol=='%')cout << nums[0]%nums[1] << "\n";





    }

}