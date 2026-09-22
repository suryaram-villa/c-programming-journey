#include <stdio.h>
int main() {
    int m,n,i;
    printf("Enter both no:");
    scanf("%d %d",&m,&n);
    for(i=1;;i++){
        if(i%m==0&&i%n==0){
            break;
        }
    }
    printf("LCM is %d.",i);
}
