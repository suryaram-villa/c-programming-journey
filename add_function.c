#include <stdio.h>
int add(int x,int y){
    int z=x+y;
    return z;
}
int main() {
    int i,j;
    printf("Enter values:");
    scanf("%d%d",&i,&j);
    printf("%d",add(i,j));
}
