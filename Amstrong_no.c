#include <stdio.h>
int main() {
    int n,d,t,t2,ans=0,count=0,i,power;
    printf("Enter no:");
    scanf("%d",&n);
    t=t2=n;
    while(n>0){
        d=n%10;
        count++;
        n=n/10;
    }
    while(t>0){
        d=t%10;
        power=1;
        for(i=1;i<=count;i++){
        power=power*d;
        }
        ans=ans+power;
        t=t/10;
    }
    if(ans==t2){
        printf("It is an amstrong no.");
}
    else{
        printf("It is not an amstrong no.");
    }
}
