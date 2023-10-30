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
    ifstream fin;
    fin.open("data.txt");
    fin.seekg(sizeof(s));
    fin.read((char*)&s,sizeof(s));
    cout << s.getEmail();

    return 0;
}


