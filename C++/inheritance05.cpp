#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int arr[5];
struct Department;
class College
{
    int id;
    char name[20];
    Department* dept[10];
    int count = 0;
    public:
    
    College(char name[])
    {
        strcpy(this->name,name);
         
    }

    char* getName()
    {
        return this->name;
    }
    
    void assignDepartment(Department* dept)
    {
        
        this->dept[count] = dept;
        count++;
    }
    Department** getDepartments()
    {
        
       return this->dept ;
        
    }
    
    
    

};
class Department
{
    int id;
    char name[20];
    College* college;
   public :
    void setId(int n)
    {
        this->id = n;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    char * getName( )
    {
        return this->name; 
    }
    void assignCollege(College college)
    {
        this->college = &college;
    }
};
class Teacher
{
    int id;
    char name[20];
};
class Student
{
    int id;
    char name[20];
};

int main(int argc, char const *argv[])
{
    College mit("MIT");
    Department d1;
    d1.setId(1000);
    d1.setName("CSE");
    d1.assignCollege(mit) ;
    mit.assignDepartment(&d1);
    Department ** list = mit.getDepartments();
    puts(list[0]->getName()); 
    puts(mit.getName());
    return 0;
}
