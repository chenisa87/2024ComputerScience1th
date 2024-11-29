#include<iostream>
using namespace std;

void hanoi(int n, char road_from, char road_temp, char road_to){
    // 移動最下面的盤子到目標
    if(n==1){
        printf("Move ring %d from %c to %c\n", n, road_from, road_to);
        return;
    }
    // 將除了最下面的盤子移動到暫時
    hanoi(n - 1, road_from, road_to, road_temp);
    printf("Move ring %d from %c to %c\n", n, road_from, road_to);
    // 將所有暫時的盤子移動到目標
    hanoi(n - 1, road_temp, road_from, road_to);
}

int main(){
    int n;
    while(scanf("%d",&n) != EOF && n!=0){
        hanoi(n, 'A', 'B', 'C');
        printf("\n");
    }
}