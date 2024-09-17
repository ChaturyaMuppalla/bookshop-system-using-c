#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    int no,cost,accno;
    char name[20],pub[20],author[20];
}p[10];
int main()
{
    int n,i,ch;
    char pubname[20],authorname[20];
    printf("\n\t\t\t\t****************************");
    printf("\n\t\t\t\t****************************\n");
    printf("\n\t\t\t\t~~~~BOOKSHOP MANAGEMENT~~~~~\n");
    printf("\n\t\t\t\t****************************");
    printf("\n\t\t\t\t****************************\n");
    printf("\nHow many records of books you want to add\n\nEnter number of books to add  :  ");
    scanf("%d",&n);
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    for(i=0;i<n;i++)
    {
        printf("\n\tEnter details of book-%d",i+1);
        printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("Book Number     : ");
        scanf("%d",&p[i].no);
        printf("Book Name       : ");
        scanf("%s",p[i].name);
        printf("Author Name     : ");
        scanf("%s",p[i].author);
        printf("Publication     : ");
        scanf("%s",p[i].pub);
        printf("Cost            : ");
        scanf("%d",&p[i].cost);
        printf("Accession Number: ");
        scanf("%d",&p[i].accno);
        printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    }
    while(1)
    { 
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
        printf("\n\t\tMENU\n");
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n1.Books of specific author");
        printf("\n2.Books of specific publisher");
        printf("\n3.All books costing RS. 200 & above");
        printf("\n4.All books");
        printf("\n5.Exit");
        printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\nenter your choice : ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:
                 printf("Enter author name  : ");
                 scanf("%s",authorname);
                 for(i=0;i<n;i++)
                 {
                     if(strcmp(p[i].author,authorname)==0)
                     printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n\n",p[i].no,p[i].name,p[i].accno);
                 }
                 break;
            case 2:
                 printf("Enter publication name : ");
                 scanf("%s",pubname);
                 for(i=0;i<n;i++)
                 {
                     if(strcmp(p[i].pub,pubname)==0)
                     printf("\nBook Number      : %d\nBook Name        : %s\nAccession Number : %d\n\n",p[i].no,p[i].name,p[i].accno);
                 }
                 break;
            case 3:
                 for(i=0;i<n;i++)
                 {
                     if(p[i].cost>=200)
                     {
                         printf("Book Number      : %d\n",p[i].no);
                         printf("Book Name        : %s\n",p[i].name);
                         printf("Publisher        : %s\n",p[i].pub);
                         printf("Cost             : %d\n",p[i].cost);
                         printf("Accession Number : %d\n",p[i].accno);
                         printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
                     }
                 }
                 break;
            case 4:
                 for(i=0;i<n;i++)
                 {
                   printf("Book Number      : %d\n",p[i].no);
                   printf("Book Name        : %s \n",p[i].name);
                   printf("Author           : %s\n",p[i].author);
                   printf("Publisher        : %s\n",p[i].pub);
                   printf("Cost             : %d\n",p[i].cost);
                   printf("Accession Number : %d\n",p[i].accno);
                   printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");  
                 }
                 break;
            case 5:
                 exit(0);
        }
    }
    return 0;
}
