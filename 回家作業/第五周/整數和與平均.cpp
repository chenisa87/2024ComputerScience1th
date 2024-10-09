#include<iostream>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)){
        if(n<=0)printf("Out of range.\n");
        else break;
    }

    int ct=0;
    float sum=0;
    float average=0;
    int number;
    while(ct<n){
        scanf("%d",&number);
        sum+=number;
        ct++;
    }
    average = sum / n;
    printf("%.0f\n",sum);
    printf("%.2f",average);
}