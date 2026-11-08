#include<stdio.h>
int x; //Global
void f2(){
    int x; //Local
    x=84;
    printf("%d\n",x);
}
void f1(){
    x=74;
    printf("%d\n",x);
    f2();
    printf("%d\n",x);
}
int main(){
    int y;
    y=4;
    x=14;
    x=x+1;
    printf("%d,%d",x,y);
    f1();
    printf("%d,%d",x,y);
}
