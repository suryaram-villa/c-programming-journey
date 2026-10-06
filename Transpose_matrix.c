#include <stdio.h>
int main() {
  printf("Enter rows and columns:");
  int i,j;
  scanf("%d %d",&i,&j);
  int a[50][50],b[50][50];
  int x,y;
  printf("A matrix:");
  for(x=0;x<i;x++){
    for(y=0;y<j;y++){
      printf("Enter value:");
      scanf("%d",&a[x][y]);
    }
  }
  printf("Given matrix: \n");
  for(x=0;x<i;x++){
    for(y=0;y<j;y++){
      printf("%d ",a[x][y]);
    }
    printf("\n");
  }
  for(x=0;x<i;x++){
    for(y=0;y<j;y++){
      b[x][y]=a[y][x];
    }
  }
  printf("Transposed matrix: \n");
  for(x=0;x<j;x++){
    for(y=0;y<i;y++){
      printf("%d ",b[x][y]);
    }
    printf("\n");
  }
}
