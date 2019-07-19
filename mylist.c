#include<stdio.h>
#include<string.h>
 int n,i,k,j,v,cd=0;
 int cnt1;

struct node
{
    char *ent[30];
    int pri;
};

void disp(struct node list[50])
{
    printf("\t**********YOUR LIST*********\t\n");
    printf("\n\tNumber\tThings");
    for(i=0;i<n;i++)
    {
        printf("\n\t%d\t%s\t\n",list[i].pri,list[i].ent);
    }
}

void sort(struct node list[50])
{
        int temp;
        char temp1[10];
        for(i=0;i<n;i++)
        {
         for(j=i+1;j<n;j++)
         {

             if(list[j].pri<=list[i].pri)
             {
                 temp=list[j].pri;
                 list[j].pri=list[i].pri;
                 list[i].pri=temp;

                 strcpy(temp1,list[j].ent);
                 strcpy(list[j].ent,list[i].ent);
                 strcpy(list[i].ent,temp1);
             }


        }
       }

       for(i=0;i<n;i++)
           list[i].pri=i+1;

        for(i=cnt1;i<=n;i++)
        {
            list[i].pri=i+1;
        }
        disp(list);

}





void main()
{
    printf("**************PRIORITY LIST****************\n");
    struct node list[50];
    char mod[10];
    int ch,end;
    printf("\nEnter the size of the list - ");
    scanf("%d",&n);
    printf("\nEnter the Elements of list - \n");

    for(i=0;i<n;i++)
    {
        printf("\nEnter the element - ");
        scanf("%s",&list[i].ent);
        printf("Enter the Priority number - ");
        scanf("%d",&list[i].pri);
    }
    sort(list);



    printf("Do you want to Change priority of the Elements(1-Yes or 2-No) - ");
    scanf("%d",&ch);

   do
   {
       if(ch==1)
    {
        cd=1;
        printf("\nEnter the Name of the Elements who's Priority do u want to change - ");
        scanf("%s",mod);
        for(i=0;i<n;i++)
        {
            v=strcmp(list[i].ent,mod);
            if(v==0)
            {
                printf("\nEnter the New Priority -");
                scanf("%d",&list[i].pri);
                cnt1=list[i].pri;
            }

        }
    }

    sort(list);

    printf("Enter 1-To Change Priority of Other Element\n2-Exit - ");
    scanf("%d",&end);
   }while(end==1);
    sort(list);
}
