#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int arr[5];
struct Department;
struct College
{
    int id;
    char name[20];
    Department** dept;

};
struct Department
{
    int id;
    char name[20];
    College* college;
};
struct Teacher
{
    int id;
    char name[20];
};
struct Student
{
    int id;
    char name[20];
};

int main(int argc, char const *argv[])
{
    College mit;
    strcpy(mit.name,"MIT");
    mit.dept =(Department **) calloc(4,sizeof(Department));
    Department d1;
    d1.id = 1000;
    strcpy(d1.name,"CSE");
    d1.college = &mit;
    mit.dept[0] = &d1;

    Department d2;
    d2.id = 2000;
    strcpy(d2.name,"MECH");
    mit.dept[1] = &d2;


    puts(d1.name);
    strcpy(d1.college->name,"GECA");
    puts(mit.dept[0]->name);
    puts(mit.dept[1]->name);
    puts(mit.name);
    return 0;
}
