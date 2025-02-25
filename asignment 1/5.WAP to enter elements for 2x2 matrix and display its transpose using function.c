#include <stdio.h>
void trans();
void main()
{
    trans();
}
void trans()
{
    int a[2][2];
    int i,j;
    
    printf("Enter the Matrix Elements : \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n");
        printf("The transpose of the matrix is \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
        {
                printf("%d \t",a[j][i]);
            }
            printf("\n");
        }
}

