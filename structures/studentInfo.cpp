#include<stdio.h>
struct studentInfo
{
     int rollNo;
     char  name[40];// char name[40];
     int contact;
    char  email[40];
    char  address[40];
};

int main(int argc, char const *argv[])
{
    studentInfo s1;

    // accepting info
    printf("Enter student details\n");
    printf("\nEnter Name:");
    gets(s1.name);
    printf("\nEnter Email:");
    gets(s1.email);
    printf("\nEnter Address:");
    gets(s1.address);
    printf("\nEnter Roll no :");
    scanf("%d",&s1.rollNo);

    // printing student info
    printf("Enter details are :");
    puts(s1.name);
    puts(s1.email);
    puts(s1.address);
    printf("%d\n",s1.rollNo);
    printf("%d",s1.contact);
    
    return 0;
}

