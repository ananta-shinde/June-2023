#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rollNo;
    char name[40];
    char email[20];
    char password[15];
};
int main(int argc, char const *argv[])
{
    Student s;

    // declare file pointer
    FILE * fptr;

    // link file pointer to a file : fopen()
    fptr = fopen("StudentData.txt","w+");

    // accept student info
    printf("Enter Stident Info\n");
    
    
    printf("Enter Name\n");
    gets(s.name);
    printf("Enter Email\n");
     gets(s.email);
    printf("Enter Password\n");
     gets(s.password);
    printf("Enter Roll no\n");
    scanf("%d",&s.rollNo);

    // preview of data
    printf("******************************\n");
    printf("PREVIEW:\n");
    printf("\nName : %s",s.name);
    printf("\nEamil : %s",s.email);
    printf("\nPassword : %s",s.password);
    printf("\nRoll No : %d\n",s.rollNo);
    printf("******************************\n");

    //validating submit choice
    printf("Do you want to submit?\n");
    int choice;
    printf("enter 1 to submit, 0 to discard :");
    scanf("%d",&choice);

    // based on choice save to file
    if(choice == 1)
    {
        // write data into file
        fprintf(fptr,"%d\t",s.rollNo);
        fprintf(fptr,"%s\t",s.name);
        fprintf(fptr,"%s\t",s.email);
        fprintf(fptr,"%s\n",s.password);
    }





    return 0;
}
