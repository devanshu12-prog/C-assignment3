#include <stdio.h>
void main()
{
    int num,power,i,result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the exponent: ");
    scanf("%d",&power);
    for(i=0;i<power;i++)
    {
        result*=num;
    }
    printf("%d raised to power %d is %d",num,power,result);
}