#include<stdio.h>
struct Student
{
     int rollNo;
     char  name[40];// char name[40];
     int contact = 0;
    char  email[40];
    char  address[40];
    
};

int main(int argc, char const *argv[])
{
    Student list[2];

    // accepting info
    printf("Enter student details\n");
    for(int i=0;i<2;i++)
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
   

   // search student by roll no
    // int roll;
    // printf("\nEnter roll no of student to be searched");
    // scanf("%d",&roll);
    // // printing student info
    // printf("Enter details are :");
    // for(int i=0;i<2;i++)
    // {
    //     if(list[i].rollNo == roll)
    //     {
    //         printf("\n*****************\n");
    //         puts(list[i].name);
    //         puts(list[i].email);
    //         puts(list[i].address);
    //         printf("%d\n",list[i].rollNo);
    //         printf("%d",list[i].contact);
    //         break;
    //     }
       
    // }


    // sort students by roll no
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2-1-i;j++)
        {
            if(list[j].rollNo> list[j+1].rollNo){
                 // swapping
            Student temp = list[j];
            list[j] = list[j+1];
            list[j+1]= temp;
            }
           
        }
    }

     printf("Enter details are :");
    for(int i=0;i<2;i++)
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

