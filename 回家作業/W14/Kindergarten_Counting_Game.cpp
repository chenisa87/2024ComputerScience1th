#include<iostream>
#include<string>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        int ct = 0;
        
        int i=0;
        bool flag = false;
        while(i<line.length()){
            while(!isalpha(line[i]) && i < line.length()){
                i++;
            }
            while(isalpha(line[i]) && i < line.length()){
                flag=true;
                i++;
            }
            if(flag){
                ct++;
                flag=false;
            }
            
        }
        cout << ct << "\n";
    
    }           
}