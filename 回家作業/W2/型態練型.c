#include<stdio.h>

int main(){
    int std_num;
    float height,weight;
    scanf("%d",&std_num);
    scanf("%f",&height);
    scanf("%f",&weight);
    printf("Number:%d\n",std_num);
    printf("Height:%.1f\n",height);
    printf("Weight:%.2f\n",weight);
    // printf("學號: %d\n",std_num);
    // printf("身高: %.1f\n",height);
    // printf("體重: %.2f\n",weight);
    printf("BMI:%.1f",weight/(height/100)/(height/100));
}