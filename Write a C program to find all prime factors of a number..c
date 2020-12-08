#include <stdio.h>
int prime(int num)
{
    int a=0,i;
    for(i=2;i<=num/2;i++)
    {
        if (num%i==0)
            a+=1;
    }
    return a;
}
void main()
{
    int i,num;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        if (num%i==0)
        {
            if (prime(i)==0)
                printf("%d\n",i);
        }
    }
}
