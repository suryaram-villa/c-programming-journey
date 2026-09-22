#include <stdio.h>
int main() {
    int n,m,i;
    printf("Enter both no:");
    scanf("%d %d",&m,&n);
    printf("Multiplication table: \n");
    for(i=1;i<=n;i++){
        printf("%d x %d = %d \n",m,i,m*i);
    }
}
