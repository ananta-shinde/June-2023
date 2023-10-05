#include<stdio.h>
class Student
{
    private:
    int rollNo;
   
    public:

     int getRollNo()
     {
        return this->rollNo;
     }
    
     void setRollNo(int n)
    {
        if(n<=0)
        {
            printf("Invalid rollno");
        }
        else{
            this->rollNo = n;
            printf("roll no set successfully");
        }
    }

};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.setRollNo(100);
    printf("%d",s1.getRollNo());
    return 0;
}
