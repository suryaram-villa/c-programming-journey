#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter 3 no.:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("%d is the largest.",x);
        }
        else{
            printf("%d is the largest.",x);
        }
    }
    else{
        if(y>z){
            printf("%d is the largest.",y);
        }
        else{
            printf("%d is the largest.",z);
        }      
    }
}
