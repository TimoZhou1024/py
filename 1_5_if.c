#include<stdio.h>
int main(){
    unsigned int a,b,c;
    int r;
    scanf("%d %d",&a,&b,&c);

    c=(~c)+1;

    r = (a&c)|(b&(~c));
    
    printf("%d",r);

    return 0;


}