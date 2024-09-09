#include<stdio.h>
int main(){
    unsigned int a,b,c;
    int r;
    scanf("%d %d",&a,&b,&c);

    r = (c ? a : b);
    
    printf("%d",r);

    return 0;


}
