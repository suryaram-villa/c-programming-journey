#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter no.");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            printf("%d \n",i);
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("It is a perfect no.");
    }
    else{
        printf("It is not a perfect no.");
    }
  }
    
