#include<stdio.h>
int main(){
    int a, b, r;
    scanf("%d %d", &a, &b);
    r= a + (~b + 1);
    printf("%d\n", r);
}