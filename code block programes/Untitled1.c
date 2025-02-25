#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char choice,name[40];
    int age;
    float height;
    FILE*fptr;
    fptr=fopen("c:\\myname.dat","w");

    do
    {

        printf("Enter name");
        scanf("%s",name);
        printf("Enter age");
        scanf("%d",&age);
                printf("Enter height");
        scanf("%f",&height);
                printf("Do you wish to continue:");
        scanf("%c",&choice);
        fprintf(fptr,"%s\t%d\t%f\n",name,age,height);
    }
    while(choice=='Y'|| choice=='y');
    fclose(fptr);
    getch();
}
