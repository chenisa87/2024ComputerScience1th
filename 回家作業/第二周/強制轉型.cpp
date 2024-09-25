#include<stdio.h>

int main(){

    int a,b;
    float c;

    printf("Enter 2 numbers.\n");
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    c = (float)a/(float)b;
    printf("%.3f",c);


}