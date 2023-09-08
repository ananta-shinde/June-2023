#include<stdio.h>
int main()
{
    int pert;
    printf("Enter marks in percentage\n");
    scanf("%d",&pert);

    if(pert >= 0 && pert < 35)
    {
        printf("your grade is : F");
    }
    if(pert >= 35 && pert <= 50)
    {
        printf("your grade is : C");
    }
    if(pert > 50 && pert <= 65)
    {
        printf("your grade is : B");
    }
    if(pert > 65 && pert <= 75)
    {
        printf("your grade is : A");
    }
    if(pert > 75 && pert <= 90)
    {
        printf("your grade is : A+");
    }
    if(pert > 90 )
    {
        printf("your grade is : A++");
    }

    return 0;
}