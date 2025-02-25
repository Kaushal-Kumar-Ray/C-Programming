#include<stdio.h>
void main()
{

    int a,b,*x,*y,s;
    printf("Enter the number");
    scanf("%d",&a);
    printf("\nThe value of x is %d",*x);
    printf("\nEnter the number");
    scanf("%d",&b);
    printf("\nThe value of y is %d",*y);
    s=*x+*y;
    printf("\nThe sum is %d",s);
}
