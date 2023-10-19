#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int arr[5];
class College;

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
    int getId()
    {
        return this->id;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    char * getName( )
    {
        return this->name; 
    }
    void assignCollege(College* college)
    {
        this->college = college;
    }
    College*   getCollege()
    {
       return this->college;
    }
};
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

    void printDepartments()
    {
         for(int i=0;i<count && count <10;i++)
         {
            if(this->dept[i])
            {
                printf("Id :%d, Name : %s \n",this->dept[i]->getId(),this->dept[i]->getName());
            }
            
         }
    }

   
    
};

class Teacher
{
    int id;
    char name[20];
    Department* dept;
    public:
    void setId(int n)
    {
        this->id = n;
    }
    int getId()
    {
        return this->id;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    char * getName( )
    {
        return this->name; 
    }

    void assignDepartment(Department* dept)
    {    
        this->dept = dept;
    }

    char* getCollegeName()
    {
       return this->dept->getCollege()->getName();
    }


};
class Student
{
    int id;
    char name[20];
    Department* dept;
    public:
    void setId(int n)
    {
        this->id = n;
    }
    int getId()
    {
        return this->id;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    char * getName( )
    {
        return this->name; 
    }

     void assignDepartment(Department* dept)
    {    
        this->dept = dept;
    }
};