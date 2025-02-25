#include<stdio.h>
int checkprime(int);
void main()
{
    int n;
    printf("Enter the number to check prime or composite =");
    scanf("%d",&n);
    if(checkprime (n)==0)
    printf("\n%d is a prime number ",n);
    else
    printf("\n%d is a composite nmber ",n); 
}
int checkprime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        break;
    }
    if(i=n)
    return 1;
    else
    return 0;
}