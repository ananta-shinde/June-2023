#include<iostream>
#include<fstream>
#include<string.h>
#include"student.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Student s;
    char email[20];
    char password[10];
    cout << "Enter your email :";
    cin >> email;
     fstream fin;
     fin.open("data.txt");
     while(!fin.eof()){
       fin.read((char*)&s,sizeof(s));
       if(strcmp(s.getEmail(),email) == 0){
          cout << "enter your new password :";
          cin >> password;
          s.setPassword(password);
           fin.seekg(-sizeof(s));
          fin.write((char*)&s,sizeof(s));
          return 0;
       }
    }

    return 0;
}
