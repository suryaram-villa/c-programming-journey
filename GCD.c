#include <stdio.h>
int main() {
    int m,n,i,t;
    printf("Enter both no:");
    scanf("%d %d",&m,&n);
    if(n>m){
        t=m;
        m=n;
        n=t;
    }
    for(i=1;i<=m;i++){
        if(m%i==0&&n%i==0){
            t=i;
        }
    }
    printf("%d is gcd.",t);
}
