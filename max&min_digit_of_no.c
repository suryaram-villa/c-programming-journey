#include <stdio.h>
int main() {
    int n,d,max,min;
    printf("Enter no.");
    scanf("%d",&n);
    max=min=n%10;
    n=n/10;
    while(n>0){
        d=n%10;
        if(max<d){
            max=d;
        }
        if(d<min){
            min=d;
        }
        n=n/10;
    }
    printf("Max is %d and Min is %d",max,min);
}
