#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter principle,time,and rate:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Simple interest: %d",(x*y*z)/100);
}
