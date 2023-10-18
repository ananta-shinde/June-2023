// Application of inheritance

#include<stdio.h>

class Employee {
       
       int salary;
       char name[20];
       char dept[20];
       bool isadmin;

       protected:
       int empId;
       
       public:
       void login(){}
       void logout(){}

};

class Manager: Employee{
     int cabinNo;
     void approveTimesheet(){}
     void assignTask(){}
     public:
     void getId()
     {
        this->empId = 20;
     }
};

class Saleman : Employee{
     int noCalls;
     int salesId;
     void attainCall(){}
};

class SalesManager:Manager,Saleman{

};
int main(int argc, char const *argv[])
{
     SalesManager sm;
     Manager m;
     
     
    
    return 0;
}
