#include<stdio.h>
void main()
{
    FILE*fp;
    int roll;char name[300];int clas;int age;
    char ch='y';
    fp=fopen("namevac.dat","w");
    while(ch!='n')
    {
        printf("\nEnter roll no: ");
        scanf("%d",&roll);
        printf("\nEnter name: ");
        scanf("%s",name);
        printf("\nEnter the class: ");
        scanf("%d",&clas);
        printf("\nEnter your age: ");
        scanf("%d",&age);
        printf("\Do you want to add more record(Y-yes/N-no:");
        ch=getchar();
    }
    fclose(fp);
    fp=fopen("namevac.dat","r");
    printf("\nData from the file\n");
     while((fscanf(fp,"%d\t%s\t%d\t%d",&roll,name,&clas,&age))!=EOF)
     {
         printf("\n%d\t%s\t%f",roll,name,clas,age);
     }
     fclose(fp);
}
