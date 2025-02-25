#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
    char name[20];
    float marks;
};
void main()
{
    struct student s[5];
    int i,j;
    int temp_m;
    char temp_n;
    for(i=0;i<2;i++)

    {   printf("--- Student no = (%d) ---",i);
        printf("\nEnter the name and marks :");
        scanf("%s%f",&s[i].name,&s[i].marks);
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
          {
              if(s[i].marks>s[j].marks)
           {
            temp_m=s[i].marks;
            s[i].marks=s[j].marks;
            s[j].marks=temp_m;
            strcpy(temp_n,s[i].name);
            strcpy(s[i].name,s[j].name);
            strcpy(s[j].name,temp_n);
        }
        }
        }
        printf("--The name and marks in ascending order of marks is");
        for(i=0;i<2;i++)
        {
            printf("\nName=%s\tMarks=%f",s[i].name,s[i].marks);
        }
        getch();
}
