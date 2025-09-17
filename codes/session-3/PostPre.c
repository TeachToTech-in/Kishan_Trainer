#include<stdint.h>
int main()
{
    int var1=20;
    int var2=41;
    int var3=--var1 + var2++;
    printf("%d",var3);
    printf("%d %d",var1,var2);
}