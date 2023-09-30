#include<stdio.h>
struct Employee
{
    int empid;
    char name[40];
    char department[20];
    char designation[20];
    int salary;
};


int main(int argc, char const *argv[]){
    // int empid;
    // char name[40];
    // char department[20];
    // char designation[20];
    // int salary;

    Employee  list[5];
    
    for(int i=0;i<5;i++){
         printf("\nEnter employee id :");
         scanf("%d",&list[i].empid);
         printf("\nEnter employee name :");
         scanf("%s",&list[i].name);
         printf("\nEnter employee dept :");
         scanf("%s",&list[i].department);
         printf("\nEnter employee designation :");
         scanf("%s",&list[i].designation);
         printf("\nEnter employee salary :");
         scanf("%d",&list[i].salary);
    }
   
     

    printf("\n--------------------------------------\n");
    printf("Employee details are :");
    printf("\n--------------------------------------\n");
    printf(" id \t name \t dept \t desig \t salary\n");
    printf("--------------------------------------\n");
    for(int i=0;i<5;i++){
        printf("id:%d\t",list[i].empid);
        printf("name :%s\t",list[i].name);
        printf("dept :%s\t",list[i].department);
        printf("designation :%s\t",list[i].designation);
        printf("salary :%d\t",list[i].salary);
        printf("\n--------------------------------------\n");
    }
     
    return 0;
}
