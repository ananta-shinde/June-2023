#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
private:
    int rollno;
    char name[40];
    char email[20];
    char password[10];
public:
    Student(/* args */) {
    }
    void setName(char n[])
    {
         strcpy(this->name,n);
    }
    char * getName()
    {
        return this->name;
    }
    void setEmail(char n[])
    {
         strcpy(this->email,n);
    }
    char * getEmail()
    {
        return this->email;
    }
    void setPassword(char n[])
    {
         strcpy(this->password,n);
    }
    char * getPassword()
    {
        return this->password;
    }
};
 


int main(int argc, char const *argv[])
{
    Student s;
    char name[40];
    char email[20];
    char password[10];
    cout << "Welcome to SMS" << endl;
    cout << "======================" ;
    
    cout << "Enter student data" << endl;
    cout << "Enter student Name :";
    cin >> name ;
    cout << "Enter student Email :";
    cin >> email ;
    cout << "Enter student Password :";
    cin >> password ;
    s.setName(name);
    s.setEmail(email);
    s.setPassword(password);

    ofstream fout;
    fout.open("data.txt",ios::app);
    
    fout.write((char *)&s,sizeof(s));


    return 0;
}
