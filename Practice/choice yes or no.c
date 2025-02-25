#include<stdio.h>
void main()
{
    FILE*fp;
    int roll;char name[30];float per;
    char ch='y';
    fp=fopen("record.txt","w");
    while(ch!='n')
    {
        printf("\nEnter roll no: ");
        scanf("%d",&roll);
        printf("\nEnter name: ");
        scanf("%s",name);
        printf("\nEnter the percentage:");
        scanf("%f",&per);
        printf("\Do you want to add more record(Y-yes/N-no:");
        ch=getchar();
    }
    fclose(fp);
    fp=fopen("record from the file\n");
    printf("\nData from the file\n");
     while((fscanf(fp,"%d\t%s\t%d",&roll,name,&per))!=EOF)
     {
         printf("\n%d\t%s\t%f",roll,name,per);
     }
     fclose(fp);
}