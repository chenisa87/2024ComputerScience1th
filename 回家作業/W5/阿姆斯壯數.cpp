#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int calculate(int num){
    int ans = 0;
    int t = to_string(num).length();
    while(num>0){
        ans+=pow((num%10),t);
        num/=10;
    }
    return ans;
}



int main(){
    int n;
    while(cin >> n){
        if(n==0)break;
        if(n==calculate(n))cout<<"Yes\n";
        else cout<<"No\n";
    }

}