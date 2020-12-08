#include <stdio.h>
void main()
{
    int num,factor;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Factors of %d are:\n",num);
    for(factor=1;factor<=num/2;factor++)
    {
        if(num%factor==0)
            printf("%d\n",factor);
    }
    printf("%d\n",num);
}
