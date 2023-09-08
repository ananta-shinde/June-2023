#include<stdio.h>
struct Student{
    int rollNo;
    char* name;
};
int main(int argc, char const *argv[])
{
    int a = 20;
    Student s,s1;
    s.name = "Ananta";
    s.rollNo = 40;
    s1.name = "Ram";
    printf("%s",s.name);
    printf("%d",s.rollNo);
    return 0;
}
