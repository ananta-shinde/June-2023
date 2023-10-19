#include"SMS.h"

int main(int argc, char const *argv[])
{
    College mit("MIT");
    Department d1;
    d1.setId(1000);
    d1.setName("CSE");
    d1.assignCollege(&mit);
    mit.assignDepartment(&d1);
    Department ** list = mit.getDepartments();
    mit.printDepartments();

    // teachers
    Teacher t1,t2;
    t1.setId(500);
    t2.setId(400);
    t1.setName("Ananta");
    t2.setName("Ram");
    t1.assignDepartment(&d1);

    puts(t1.getCollegeName());


    return 0;
}
