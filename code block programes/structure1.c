 #include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int a,f;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    f=fact(a);
    printf("\nFactorial of %d is %d",a,f);
}
int fact(int a)
{
    if(a<=1)
    return 1;
    else
    return(a*fact(a-1));
}
