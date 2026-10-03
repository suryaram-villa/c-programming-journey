#include <stdio.h>
int main() {
    int k,l,j,i,d,x,y,n;
    int a[50][50],b[50][50],c[50][50];
    printf("Enter the A values[rows,coloumns]");
    scanf("%d%d",&i,&j);
    printf("Enter values of A matrix:");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("Enter value:");
            scanf("%d",&d);
            a[k][l]=d;
        }
    }
    printf("Enter the B values[rows,coloumns]");
    scanf("%d%d",&x,&y);
    printf("Enter values of B matrix:");
    for(k=0;k<x;k++){
        for(l=0;l<y;l++){
            printf("Enter value:");
            scanf("%d",&d);
            b[k][l]=d;
        }
    }
    if(j!=x){
        printf("Multiplication is not possible.");
    }
    else{
        for(k = 0; k < i; k++) {
            for(l = 0; l < y; l++) {
                c[k][l] = 0;

                for(n = 0; n < j; n++) {
                    c[k][l] = c[k][l] + a[k][n] * b[n][l];
                }
            }
        }
        for(k = 0; k < i; k++) {
            for(l = 0; l < y; l++) {
                   printf("%d ",c[k][l]);
                }
            printf("\n");
    }
    
}
}    
