#include<stdio.h>
int menu();
void input(int n);
void highestmark (int n);
void search (int n,int key);
struct student
{
int sid;
char fname[30],lname[30];
float physics,chemistry,maths,nepali,english,computer,total;

}s[100];
int main()
{
int n,ch,key,temp;
do{   ch=menu();
switch(ch)
{
case 1: printf("\nEnter how many records:");
scanf("%d",&n);
input(n);
break;
case 2: display(n); break;
case 3: highestmark(n); break;
case 4: printf("\nEnter student id for searching:");
scanf("%d",&key);
search(n, key); break;
case 5: printf("\nThanks for using this program");
break;
}
}while(ch!=5);
return 0;
}
int menu()
{
    int ch;
    printf("\n1--gt:Input records");
    printf("\n2--gt: Display records");
    printf("\n3--gt:Highest records");
    printf("\n4--gt:Search records");
    printf("\n5--gt:Exit");
    printf("\nPlease select your choice:");
    scanf("%d",&ch);
    return(ch);
    }
    void input(int n)
    {
     int i,j;
     for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;j++)
      {
       if(s[i].total>s[j].total)
      {
          temp=s[i];
          s[i]=s[j];
          s[j]=temp;
    }
    }
    }

    for(i=0;i=<n;i=++)
    {
        printf("\nSID=\nFull name=%s%5s",s[i].sid,s[i].fname,s[i].lname);
        printf("Physics=%f Chemistry=%f maths=%f nepali=%f English=%fcomputer=%f",s[i].physics, s[i].chemistry,s[i].maths,s[i].nepali,s[i].english,s[i].computer);
    }
    }
    void hignestmark(int n)
    {

        int i, max=s[0].total;
        for(i=0;i<n;i++)
        {
            if(s[i].total>max)
                max=s[i].total;
        }
           for(i=0;i<n;i++)
        {
            if(max==s[i].total)
            {
        printf("\nSID=\nFull name=%s%5s",s[i].sid,s[i].fname,s[i].lname);
        printf("Physics=%f Chemistry=%f maths=%f nepali=%f English=%fcomputer=%f",s[i].physics, s[i].chemistry,s[i].maths,s[i].nepali,s[i].english,s[i].computer);
        break;
        }
        }
        }
        void search( int n,int key)
        {
            int i,flag=0;
            for(i=0;i<n;i++)
            {
            if(key==s[i].sid)
            {
                flag=1;
                break;
            }
            }
            if(flag==0)
            printf("\nThe search is unsuccessful");
            else("\nThe search is successful at position %d",i);
            {
        printf("\nSID=\nFull name=%s%5s",s[i].sid,s[i].fname,s[i].lname);
        printf("Physics=%f Chemistry=%f maths=%f nepali=%f English=%fcomputer=%f",s[i].physics, s[i].chemistry,s[i].maths,s[i].nepali,s[i].english,s[i].computer);
            }
            }
