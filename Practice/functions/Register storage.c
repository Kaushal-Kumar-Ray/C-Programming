#include<stdio.h>
#include<conio.h>
void show();
void main()
{
    show();
}
void show()
{
    register int n=5,i;
    for(i=1;i<=10;i++)
    {
     printf("\n number %d",n);
     n=n+5;
    }
}