#include<stdio.h>
#include<conio.h>
extern int a=5,b=6;
int show();
void main()
{
   int k;
   k=show();
   printf("\na+b= %d+%d",a,b);
   printf("\n%d",k);
}
int show()
{
   
    return(a+b);
}