#include<stdio.h>

class Employee{
     int id = 100;
     char name[30];
     char dept[20];
     double salary = 5000;
    public :
     void setId(int id){
        this->id = id;
     }
     int getId()
     {
        return this->id;
     }
     double getSalary()
     {
        return this->salary;
     }

     Employee(int id,int salary)
     {
        this->id = id;
        this->salary = salary;
     }
};
int main(int argc, char const *argv[])
{
    Employee e(400,45222),e2(142,5452121);
    // e.setId(1000);
    printf("%d\n",e.getId());
    printf("%d\n",e2.getId());
    printf("%lf\n",e2.getSalary());
    return 0;
}
