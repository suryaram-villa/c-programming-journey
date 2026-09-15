#include <stdio.h>
int main() {
    int n;
    printf("Enter any year:");
    scanf("%d",&n);
    if(n%4==0){
        printf("It is a leap year.");
    }
    else{
        printf("It is NOT a leap year.");
    }
}
