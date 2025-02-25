#include <stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a[3][3];
    int b[3][3];
    int s[3][3];
    int i,j;
    printf("Enter the Elements of first matrix (1) : \n");
        for(i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("Enter the Elements of second  Matrix (2) : \n");
        for(i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
           for(i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                s[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("The sum of two matrices  is \n:");
           for(i=0; i<3; i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",s[i][j]);
            }
            printf("\n");
        }
}