#include<stdio.h>

struct Student
{
    int rollNo;
    char name[40];
    char address[100];
    char email[20];
};
struct Degree
{
    char name[40];
    int code;
    // default value for max marks is 100
    float maxMarks=100;
    float obtainedMarks;
    Student list[5];
};
struct College{
    char name[40];
    int id;
    char address[100];
    Degree degrees[5];
};





int main(int argc, char const *argv[])
{
    College c1;
     
    return 0;
}
