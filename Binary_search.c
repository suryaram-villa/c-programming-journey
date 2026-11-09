#include<stdio.h>
#include<stdbool.h>
int main(){
    bool flag=0;
    int key,n,low,high,mid;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    low=0;
    high=n-1;
    printf("Enter sorted values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);
    while(low<=high){
        mid=(high+low)/2;
        if(key==a[mid]){
            flag=1;
            break;
        }
        else if(key<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag==1){
        printf("Element found at position %d",mid+1);
    }
    else{
        printf("Element not found");
    }
}
