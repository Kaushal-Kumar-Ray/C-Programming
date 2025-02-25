#include<stdio.h>
#include<conio.h>
int weights(float array[200],int size);
int main()
{

float s[200];int i;       
int a;       
printf("Enter size of array = ");
scanf("%d",&a);
printf("\nEnter weights of students\n ");
for(i=0;i<a;i++)
{
    printf("Weight [%d]= ",i);
   scanf("%f",&s[i]);
}
printf("\nTotal number of student in the range= %d",weights(s,a));
getch();
return 0;
}

int weights(float array[200],int size)
{

int i;
int count=0;

for(i=0;i<size;i++)

{
if(array[i]>50 && array[i]<60)
    {
        count++;
    }
}

return count;

getch();

}