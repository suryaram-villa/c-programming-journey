#include<stdio.h>
void sample(){
    static int x=1;
    x=x+1;
    printf("%d \n",x);
}
int main(){
    sample();
    sample();
    sample();
}
