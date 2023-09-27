#include<stdio.h>
struct Student
{
    // data memebers
     int rollNo;
     float marks;

    // menbers functions
     void initStudent()
        {
            this->rollNo = 0;
            this->marks = 20;
        }
    //printing a student data
    void printData(){
        printf("\nRoll no is : %d, Marks are : %f\n",this->rollNo,this->marks);
    }

    int studentCmp(Student s2)
 {
      if(this->marks > s2.marks)
      {
        return 1;
      }
      else if(this->marks < s2.marks){
        return -1;
      }else{
        return 0;
      }
 }    
};
int main(int argc, char const *argv[])
{
    Student s1,s2,s3,s4;
    s1.initStudent();
    s1.printData();
    s1.marks = 75.75;
    s1.rollNo = 100;
    Student s2;
    s2.initStudent();
    s2.printData();
    if(s1.studentCmp(s2))
    {
         printf("%d\t%f",s1.rollNo,s1.marks);
         printf("\n%d\t%f",s2.rollNo,s2.marks);
    }
   
    return 0;
}
