#include<stdio.h>
int main(){
    int num, n;
    
    scanf("%d",&num);
    n=num>>31;
    if(n==0)
        printf("positive");
    else
        printf("negative");
    return 0;

}