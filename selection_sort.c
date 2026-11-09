#include<stdio.h>
int main(){
    int n,i,j,temp,min;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array values: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
