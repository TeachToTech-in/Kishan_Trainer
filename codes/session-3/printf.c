#include<stdio.h>
int main(){
    printf("PLease enter the numbers\n");
    int num=0,num1=0;
    scanf("%d %d",&num,&num1);
    int sum=num+num1;
    printf("The sum of %d and %d is %d\n",num,num1,sum);
    return 0;
}