#include<stdbool.h>
#include<stdio.h>
int main(){
    int n,i,key;
    bool flag=0;
    printf("Enter n value:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key value:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at index %d",i);
    }
    else{
        printf("Element not found");
    }
}
