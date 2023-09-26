#include<stdio.h>
struct Student
{
    // data memebers
     int rollNo;
     float marks;

    // menbers functiions
     void initStudent(Student* s)
        {
            s->rollNo = 0;
            s->marks = 20;
        }
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.initStudent(&s1);
    Student s2;
    s2.initStudent(&s2);
    printf("%d\t%f",s1.rollNo,s1.marks);
    printf("\n%d\t%f",s2.rollNo,s2.marks);
    return 0;
}
