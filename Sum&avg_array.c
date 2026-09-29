#include <stdio.h>
int main() {
    int n,i;
    float sum=0;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter value:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is %f and avg is %f",sum,sum/n);
}
