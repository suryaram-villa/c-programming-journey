#include <stdio.h>
int main() {
    int k,l,j,i,d;
    printf("enter the values[rows,coloumns]");
    scanf("%d%d",&i,&j);
    int a[i][j],b[i][j],c[i][j];
    printf("Enter values of A matrix:");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("Enter value:");
            scanf("%d",&d);
            a[k][l]=d;
        }
    }
    printf("Enter values of B matrix:");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("Enter value:");
            scanf("%d",&d);
            b[k][l]=d;
        }
    }
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            c[k][l]=a[k][l]+b[k][l];
        }
    }
    printf("The resultant matrix is:");
     for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("%d ",c[k][l]);
        }
         printf("\n");
    }
}
    
