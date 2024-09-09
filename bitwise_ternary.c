#include<stdio.h>

int main(){
    unsigned int a, b, c;
    int r;
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    unsigned int mask = ~c + 1; // Create a mask based on c
    r = (a & mask) | (b & ~mask);

    printf("Result: %d\n", r);

    return 0;
}
