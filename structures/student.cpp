#include<stdio.h>

struct Subjects{
    char* name = "Maths";
};  

struct Student{
     int rollNo;
     char* name;
     char * college; 
     Subjects subjects[5];
};

int main(int argc, char const *argv[])
{
    Student s1;
    Student s2;
    //assign values to structure
    s1.rollNo = 1000;
    s2.rollNo = 1001;
    s1.name = "Ananta";
    s2.name = "Sachin";
    s1.subjects[0].name = "Economics";

    // read values from structure
    puts(s1.subjects[0].name);
    return 0;
}
