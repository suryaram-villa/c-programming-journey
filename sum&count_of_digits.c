#include <stdio.h>
int main() {
    int n,d,sum=0,count=0;
    printf("Enter no.");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum=sum+d;
        count++;
        n=n/10;
    }
    printf("Sum is %d and no. of digits are %d",sum,count);
}
