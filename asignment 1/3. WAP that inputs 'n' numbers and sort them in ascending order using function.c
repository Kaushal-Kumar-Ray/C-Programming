#include<stdio.h>
void ascd(int a[200], int n);
void main()
{
 int a[200], i, n;
 printf("Enter the size of array = ");
 scanf("%d", &n);
 
 for(i=0;i<n;i++)
 {
  printf("Enter the number(%d) =",i);
  scanf("%d", &a[i]);
 }
 
 ascd(a,n);
 printf("\nArray in ascending order is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
 }



void ascd(int a[10], int n)
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}