#include <stdio.h>
int lcm(int x,int y){
    int i,LCM;
    for(i=1;i<=x*y;i++){
        if(i%x==0 && i%y==0){
            LCM=i;
            break;
        }
    }
    return LCM;
}
int main() {
    int i,j;
    printf("Enter values:");
    scanf("%d%d",&i,&j);
    printf("The LCM is: %d",lcm(i,j));
}
