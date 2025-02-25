#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[20];
    int clas;
    float rollno;
};
void main()
{
    struct student s[2];
    int i,n;
    printf("Enter the total number of Students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {   printf("--- Student no = (%d) ---",i);
        printf("\nEnter the id :");
        scanf("%d",&s[i].id);
        printf("\nEnter the name :");
        scanf("%s",s[i].name);
        printf("\nEnter the class :");
        scanf("%d",&s[i].clas);
        printf("\nEnter the roll no :");
        scanf("%f",&s[i].rollno);
    }

    printf("\n!! --- Students details are here --- !!\n");
    for(i=1;i<=n;i++)
    {

        printf("\nYour id is :%d",s[i].id);
        printf("\nYour name is :%s",s[i].name);
        printf("\nYour class is :%d",s[i].name);
        printf("\nYour roll no is :%f",s[i].rollno);
        printf("\n");


}}
