#include<stdio.h>
struct student
{
 int sid;
 char name[40];
 float fee;
}std;
void main()
{
    FILE*fp;
    fp=fopen("student.txt","w");
    printf("\n enter student id:");
    scanf("%d,&std.sid");
    printf("\n enter name:");
    scanf("%d,std.name");
    printf("\n enter fee:");
    scanf("%d,&std.fee");
    fwrite(&std,sizeof(std),l,fp);
    fclose(fp);
    fp=fopen("student.txt","r");
    pfintf("\nData from the file\n");
    fread(&std,sizeof(std),l,fp);
    printf("\n%d\t%s\t%f",std.sid.std.name,std.fee);
    fclose(fp);

}
