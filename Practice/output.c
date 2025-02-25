#include<stdio.h>
void amin()
{

    FILE*fp;
    int id;
    char name;
    float post;
    fp=fopen("nameemp.txt","r");
    printf("\nData from the files\n");
    while((fscanf(fp,"%d\t%s\t%d",&id,name,&post))!=EOF)
    {

        printf("\n%d\t%s\t%d",id,name,post);
    }
    fclose(fp);
}
