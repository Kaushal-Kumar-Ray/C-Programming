#include <stdio.h>
void greatest(int);
void main()
{
    int n;
      printf("Enter the size of array = ");
        scanf("%d",&n);
        greatest(n);
}

void greatest(int n)
{
    int num[100];
    int i,g;
    printf("\n Enter the numbers : \n");
        for (i=0; i<n;i++)
        {
            scanf("%d",&num[i]);
        }
           g=num[0];
            for(i=1;i<n;i++)
            {
                if(num[i] > g)
                {
                    g=num[i];
                }
            }
            printf("\n%d is the most significant number among all ", g);
}