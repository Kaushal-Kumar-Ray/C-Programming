
/*WAP designing a menu base system which has the following features: Appending records Reading records Delete Records Quit*/
#include "stdio.h"
 void red(void);
 void append(void);
 void deletedata(void);
 struct employee { int empid;
 char fname[20],lname[20];
 float salary;
 }
 emp;
 FILE *fp1,*fp2;
 int main()
 {
 int ch;
 do
{
printf(" 1-->Append Data\n 2--> Read data\n 3--> Delete data\n 4-->Quit\n Enter your choice:");
 scanf("%d",&ch);
 switch(ch) {
 case 1: append();
break;
 case 2: read();
break;
 case 3: deletedata();
 break;
 default: printf("Thanks for using this program.");
 }
 }
while(ch!=4);
 return 0;
 }
 void append()
 {
 char ch='y';
 fp1=fopen("empdata.txt","a");
 while(ch!='n')
 {
 printf("Enter employee id:");
 scanf("%d",&emp.empid);
 printf("Enter first name:");
 scanf("%s",emp.fname);
 printf("Enter last name:");
 scanf("%s",emp.lname);
 printf("Enter salary:");
 scanf("%f",&emp.salary);
 fprintf(fp1,"%d\t%s\t%s\t%f",emp.empid,emp.fname,emp.lname,emp.salary);
 printf("Do you want to append more record(y-Yes/n-No):");
 ch=getche();
 }
 fclose(fp1);
 }
 void red()
 {
 fp1=fopen("empdata.txt","r");
 printf("Data from the file");
 while((fscanf(fp1,"%d\t%s\t%s\t%f",&emp.empid,emp.fname,emp.lname,&emp.salary))!=EOF)

 {
 printf("%d\t%s\t%s\t%f",emp.empid,emp.fname,emp.lname,emp.salary);
 }
 fclose(fp1);
 }
 void deletedata()
 {
 int key;
 fp1=fopen("empdata.txt","r");
 fp2=fopen("temp.txt","w");
 printf("Enter empid to be deleted:");
 scanf("%d",&key);
 while((fscanf(fp1,"%d\t%s\t%s\t%f",&emp.empid,emp.fname,emp.lname,&emp.salary))!=EOF)
 {
 if(key==emp.empid) continue;
 else fprintf(fp2,"%d\t%s\t%s\t%f",emp.empid,emp.fname,emp.lname,emp.salary);
 }
 printf("One record is deleted:");
 fclose(fp1);
 fclose(fp2);
 remove("empdata.txt");
 rename("temp.txt","empdata.txt");
 }
