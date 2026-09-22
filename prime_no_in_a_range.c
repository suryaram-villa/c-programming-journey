#include <stdio.h>
#include <stdbool.h>
int main() {
    int m, n, i, j;
    bool flag;
    printf("Enter range: ");
    scanf("%d %d", &m, &n);
    printf("Prime no. within the range are: \n");
    for(i = m; i <= n; i++) {
        flag = true;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = false;
                break;     
            }
        }
        if(flag == true) {
            printf("%d \n", i);
        }
    }
}
