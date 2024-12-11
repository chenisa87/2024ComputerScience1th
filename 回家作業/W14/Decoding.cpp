#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    for(int i=1;i<=n;i++){
        string line;
        getline(cin, line);

        string result = "";
        char now_char;
        int times = 0;
        for(char c:line){
            if(isalpha(c)){
                if(times){
                    result += string(times, now_char);
                }
                now_char = c;
                times = 0;
            }
            else{
                times = times*10 + (c-'0');
            }
        }
        result += string(times, now_char);
        cout << "Case " << i << ": " << result << "\n";
    }
}