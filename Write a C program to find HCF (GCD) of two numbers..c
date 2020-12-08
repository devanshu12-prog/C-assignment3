#include <stdio.h>
void main()
{
    int num1,num2,min,i,hcf=1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter a number: ");
    scanf("%d",&num2);
    min = (num1<num2) ? num1 : num2;
    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
            hcf=i;
    }
    printf("HCF of %d and %d is %d",num1,num2,hcf);
}
