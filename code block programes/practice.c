#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
        char temp_name[25],temp_add[30];
        int i,j,n;
        struct person
        {
                char name[25];
                char add[30];
        }
        p[200];
        printf("input the number of presons:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("input name and address:");
                scanf("%s%s",p[i].name,p[i].add);
        }
        for(i=0;i<n;i++)
        {
                for(j=i;j<n;j++)
                {
                        if(strcmp(p[i].name,p[j].name)>0)
                        {
                                strcpy(temp_name,p[i].name);
                                strcpy(p[i].name,p[j].name);
                                strcpy(p[j].name,temp_name);
                                strcpy(temp_add,p[i].add);
                                strcpy(p[i].add,p[j].add);
                                strcpy(p[j].add,temp_add);
                        }
                }
        }
        printf("\n Name and address according to the alphabetical order of name :");
        for(i=0;i<n;i++)
        {
                printf("\n Name= %s\nAddress= %s",p[i].name,p[i].add);
        }
        getch();
}
















