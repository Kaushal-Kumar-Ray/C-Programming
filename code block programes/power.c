#include<stdio.h>
int power(int,int)
void main()
{
        int x,y,p;
        printf("Enter the value of y and x:");
        scanf("%d%d",&y,&x);
        p=power(y,x);
        printf("\nY raised to the power X is :%d",p);

}
int power(int y,int x)
{
        int p=1,i;
        for(i=1;i<=x;i++)
        {
                p=p*y;
        }
        return y;
}
