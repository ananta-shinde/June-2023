#include<stdio.h>
struct Employee
{
    int empid;
    char name[40];
    char department[20];
    char designation[20];
    int salary;
};

void printEmployeeList(Employee list[])
{
    // to print all employees data
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

}

void searchEmployeeById(Employee list[],int choice)
{
    // search employee by empid
    printf("\n--------------------------------------\n");
    printf("Employee details are :");
    printf("\n--------------------------------------\n");
    printf(" id \t name \t dept \t desig \t salary\n");
    printf("--------------------------------------\n");
     for(int i=0;i<5;i++){
        if(choice == list[i].empid)
        {
             printf("id:%d\t",list[i].empid);
            printf("name :%s\t",list[i].name);
            printf("dept :%s\t",list[i].department);
            printf("designation :%s\t",list[i].designation);
            printf("salary :%d\t",list[i].salary);
            printf("\n--------------------------------------\n");

        }
       
    }
}

int main(int argc, char const *argv[]){
   
    Employee  list[5];
    for(int i=0;i<5;i++){

        scanf("%d",&list[i].empid);
        scanf("%s",&list[i].name);
        scanf("%s",&list[i].department);
        scanf("%s",&list[i].designation);
        scanf("%d",&list[i].salary);
        printf("\n--------------------------------------\n");
    }
    

    // search employee by empid
    int choice;
    printf("\n Enter employee Id :");
    scanf("%d",&choice);
    searchEmployeeById(list,choice);
    printEmployeeList(list);
     
    return 0;
}
