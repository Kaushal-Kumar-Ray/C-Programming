#include<stdio.h>
void main()
{
    FILE*fp;
    char name[20];
    fp=fopen("oldfile.txt","w");
    printf("/nEnter name: ");
    scanf("%s",name);
    fprintf(fp,"%s",name);
    fclose(fp);
    rename("oldfile.txt","newfile.txt");
    remove("newfile.txt");
}