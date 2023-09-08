#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int noOfStduent;
    printf("Welcome To Exam Section\n");
    printf("Enter no of students");
    scanf("%d",&noOfStduent);
   // int students[noOfStudent]
    int* students;
    students =(int *) calloc(noOfStduent,sizeof(int));
    for(int i=0;i<noOfStduent;i++)
    {
        scanf("%d",&students[i]);
    }
     for(int i=0;i<noOfStduent;i++)
    {
        printf("%d\n",students[i]);
    }
    return 0;
}
