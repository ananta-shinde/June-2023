#include<stdio.h>
struct studentInfo
{
     int rollNo;
     char  name[40];// char name[40];
     int contact = 0;
    char  email[40];
    char  address[40];
    
};

int main(int argc, char const *argv[])
{
    studentInfo list[5];

    // accepting info
    printf("Enter student details\n");
    for(int i=0;i<5;i++)
    {
        printf("\nEnter Name:");
        scanf("%s",list[i].name);
        printf("\nEnter Email:");
        scanf("%s",list[i].email);
        printf("\nEnter Address:");
        scanf("%s",list[i].address);
        printf("\nEnter Roll no :");
        scanf("%d",&list[i].rollNo);
    }
   

    // printing student info
    printf("Enter details are :");
    for(int i=0;i<5;i++)
    {
        printf("\n*****************\n");
        puts(list[i].name);
        puts(list[i].email);
        puts(list[i].address);
        printf("%d\n",list[i].rollNo);
        printf("%d",list[i].contact);
    }
   
    
    return 0;
}

