#include <stdio.h>
int main() {
    int n;
    printf("Enter any no.:");
    scanf("%d",&n);
    if(n==0){
        printf("It is zero.");
    }
    else if(n>0){
        printf("It is a positive no.");
    }
    else if(n<0){
        printf("It is a negative no.");
    }
    
}
