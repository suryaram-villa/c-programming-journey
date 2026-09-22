#include <stdio.h>
int main() {
    int n,d;
    printf("Enter no.");
    scanf("%d",&n);
    printf("The digits of the number are:");
    while(n>0){
        d=n%10;
        printf("%d,",d);
        n=n/10;
    }
}
