#include <stdio.h>
int main() {
    int x, y, z, r;
    printf("Enter 3 no.: ");
    scanf("%d %d %d", &x, &y, &z);
    r = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    printf("max is %d", r);
}
