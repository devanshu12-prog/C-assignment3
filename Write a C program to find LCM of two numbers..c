#include <stdio.h>
void main()
{
    int num1,num2,max,i,lcm=1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter a number: ");
    scanf("%d",&num2);
    max = (num1>num2) ? num1 : num2;
    i=max;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i+=max;
    }
    printf("LCM of %d and %d is %d",num1,num2,lcm);
}