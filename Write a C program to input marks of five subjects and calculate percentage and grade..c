#include <stdio.h>
void main()
{
    int phy,chem,bio,math,comp; 
    float percentage; 
    printf("Enter marks in Physics: ");
    scanf("%d",&phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d",&chem);
    printf("Enter marks in Biology: ");
    scanf("%d",&bio);
    printf("Enter marks in Mathematics: ");
    scanf("%d",&math);
    printf("Enter marks in Computer: ");
    scanf("%d",&comp);
    percentage=(phy+chem+bio+math+comp)/5.0;
    printf("Percentage = %.2f\n", percentage);
    if(percentage>= 90)
        printf("Grade A");
    else if(percentage>= 80)
        printf("Grade B");
    else if(percentage>= 70)
        printf("Grade C");
    else if(percentage>= 60)
        printf("Grade D");
    else if(percentage>= 40)
        printf("Grade E");
    else
        printf("Grade F");
}