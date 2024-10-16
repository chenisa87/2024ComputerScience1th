#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int binary_to_decimal(string num){
    int ans=0;
    int times=0;
    for(int i = num.size()-1;i>=0;i--){
        ans+=(num[i]-'0')*pow(2,times);
        times++;
    }
    return ans;
}


int main(){
    string num;
    while(cin >> num && (num!="00000" && num!="0")){
        cout << binary_to_decimal(num) << "\n";
    }

}