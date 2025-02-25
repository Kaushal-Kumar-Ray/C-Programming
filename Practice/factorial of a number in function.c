#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf(" Enter the number = ");
    scanf("%d",&n);
    
    printf("\n The factorial of the number is = %d",fact(n));
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return(f);
    
}