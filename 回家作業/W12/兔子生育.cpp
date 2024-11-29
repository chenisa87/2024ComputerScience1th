#include<iostream>
using namespace std;

int rabbit(int n){
    if(n==1 || n==0)return 1;
    else return rabbit(n-1)+rabbit(n-2);
}

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        printf("f[%d]:%d\n",n,rabbit(n));
    }
}