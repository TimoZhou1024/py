#include<stdio.h>
int main(){
    unsigned int a,b,c;
    int r;
    scanf("%d %d",&a,&b,&c);

    unsigned int mask = ~c + 1; // Create a mask based on c
    r = (a & mask) | (b & ~mask);
    
    printf("%d",r);

    return 0;


}
