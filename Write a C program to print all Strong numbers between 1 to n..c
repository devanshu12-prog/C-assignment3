#include <stdio.h>
int fact(int num)
{
    int i,fact=1;
    for(i=2;i<=num;i++)
        fact*=i;
    return fact;
}
void strong(int num)
{
    int num1,strg=0;
    num1=num;
    for(;num>0;num/=10)
        strg+=fact(num%10);
    if (num1==strg)
        printf("%d\n",num1);
}
void main()
{
    int num,n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(num=1;num<=n;num++)
        strong(num);
}
