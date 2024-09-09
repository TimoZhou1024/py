#include<stdio.h>

int main(){
    unsigned int a, b, c;
    int r;
    scanf("%d %d %d", &a, &b, &c);
    unsigned int mask = ~c + 1; 
    r = (a & mask) | (b & ~mask);
    printf("%d\n", r);

    return 0;
}
