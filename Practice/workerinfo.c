
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main ()
{
    FILE *fptr;
    char user[1000][30];
    char work[1000][30];
    int age[1000],x,z,y,a,b,c,i,n;
    int num[1000][10];
    char add[1000][50];


    fptr = fopen("data.txt", "w+");

    if (fptr == NULL )
    {
        printf("File does not exists !! \n");
    }
 start:
        printf("Enter the limit : ");
             scanf("%d",&n);
i=1;
        while(i<=n)
        {
            printf("\nEnter your name : ");
                scanf("%s",&user[i]);

            fprintf(fptr,"Name = %s \n", user[i]);

            printf("\nWhat is your Professsion : ");
                scanf("%s", &work[i]);

            fprintf(fptr,"Professsion = %s \n ",work[i]);

            printf("\nEnter your Age : ");
                scanf("%d", &age[i]);

            fprintf(fptr,"Age = %d\n",age[i]);
            i++;

        }
        printf("\nIf Everything entered is correct press 1 : ");
            scanf("%d",&x);

            if (x == 1)
                {
                    goto end;
                }
                else{
                    goto start;
                }
 end:
        printf("\nThanks for The information !!! \n");
            fclose(fptr);



getch();
}
