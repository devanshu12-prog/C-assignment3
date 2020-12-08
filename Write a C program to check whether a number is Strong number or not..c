#include <stdio.h>
int fact(int num)
{
    int i,fact=1;
    for(i=2;i<=num;i++)
        fact*=i;
    return fact;
}
void main()
{
    int i,num,num1,strg;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1=num;
    for(;num>0;num/=10)
        strg+=fact(num%10);
    if (num1==strg)
        printf("%d is a strong number",num1);
    else
        printf("%d is not a strong number",num1);
}