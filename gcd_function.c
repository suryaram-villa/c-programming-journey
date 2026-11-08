#include <stdio.h>
int gcd(int x,int y){
    int i,GCD=1,temp;
      if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(i=1;i<=y;i++){
        if(x%i==0 && y%i==0){
            if(i>GCD){
                GCD=i;
            }
        }
    }
    return GCD;
}
int main() {
    int i,j;
    printf("Enter values:");
    scanf("%d%d",&i,&j);
    printf("The GCD is: %d",gcd(i,j));
}
