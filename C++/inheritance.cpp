#include<stdio.h>
class Employee{
    private:
        
    protected:
        int id = 100;
        double salary = 5000;
     public:
        char name[30];
        char dept[20];

    int getId()
    {
        return this->id;
    }
    
};

class Manager : protected Employee {
      
};
class Salesman : protected Employee {
     public:
      int insentive;
};
int main(int argc, char const *argv[])
{
     Employee e;
     Manager m;
     Salesman s;
     
     
     
     
    return 0;
}
