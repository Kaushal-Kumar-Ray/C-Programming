    #include<stdio.h.>
    void main()
    {

        int id;char name[20];int post;
        FILE*fp;
        fp=fopen("nameemp.txt","w");

        printf("\nEnter id:");
        scanf("%d",&id);

        printf("\nEnter name :");
        scanf("%s",name);

        printf("\nEnter post of the employee :");
        scanf("%d",&post);

        fprintf(fp,"%d\t%s\t%d",id,name,post);
        fclose(fp);
    }
