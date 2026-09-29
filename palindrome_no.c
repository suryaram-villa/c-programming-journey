#include <stdio.h>
int main() {
    int n,d,t,n2=0;
    printf("Enter no:");
    scanf("%d",&n);
    t=n;
    while(n>0){
        d=n%10;
        n2=(n2*10)+d;
        n=n/10;
    }
    if(n2==t){
        printf("It is a palindrome.");
    }
    else{
        printf("It is not a a palindrome.");
    }
}
