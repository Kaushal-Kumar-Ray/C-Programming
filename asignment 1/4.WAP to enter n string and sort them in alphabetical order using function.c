

#include <stdio.h>
#include <string.h>

void sort();

void main()
{
    sort();
}
void sort()
{
    char name[500][50];
    char temp[500][50];
    int n,i,j;
    
    printf("Enter the number of  strings to be sorted = ");
        scanf("%d",&n);
        
    printf("\nEnter the Strings : \n");
        for(i=0;i<n;i++)
            {
            scanf("%s",name[i]);
            }
            
        for(i=0;i<n;i++)
            {
        for(j=i+1;j<n;j++)
                {
                    if(strcmp(name[i],name[j])>0)
                {
                  strcpy(temp,name[i]);
                  strcpy(name[i],name[j]);
                  strcpy(name[j],temp);
                 }
            }
            }
            printf("Sorted strings are : \n");
            for(i=0;i<n;i++)
            {
                printf("%s\n",name[i]);
            }
            
}
