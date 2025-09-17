#include<stdio.h>
int main(){   
    int n;
    scanf("%d",&n);
    int res=(n>>2)&1;
    printf("%d",res);
}