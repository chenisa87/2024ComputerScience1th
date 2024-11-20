#include<iostream>
using namespace std;

int Coordinate(int x,int y){
    if((x>0 || x<0) && y==0)return -1;
    if(x==0 && (y>0 || y<0))return -2;
    if(x>0 && y>0)return 1;
    if(x<0 && y>0)return 2;
    if(x<0 && y<0)return 3;
    if(x>0 && y<0)return 4;
}

int main(){
    int x,y;
    while(cin>>x>>y && !(x==0 && y==0)){
        switch (Coordinate(x,y))
        {
        case -1:
            cout << "On Axis\n";
            break;
        case -2:
            cout << "On Ayis\n";
            break;
        case 1:
            cout << "On 1\n";
            break;
        case 2:
            cout << "On 2\n";
            break;
        case 3:
            cout << "On 3\n";
            break;
        case 4:
            cout << "On 4\n";
            break;
        default:
            break;
        }
    }
}