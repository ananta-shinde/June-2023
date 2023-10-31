#include<iostream>
#include<fstream>
#include<string.h>
#include"student.h"
using namespace std;

 
int main(int argc, char const *argv[])
{
    char email[20];
    char password[10];
    int flag = 0;
    cout << "Enter your email :";
    cin >> email;
    cout << "Enter your Password :";
    cin >> password;

    Student s;
    ifstream fin;
    fin.open("data.txt");
    
    while(!fin.eof()){
       fin.read((char*)&s,sizeof(s));
       if(strcmp(s.getEmail(),email) == 0)
       {
               flag = -1;
            if(strcmp(s.getPassword(),password) == 0)
            {
                flag = 1;
            }
         
       }
    }

    if(flag == 0)
    {
        cout << "User does not exists" <<endl;
    }
    else if(flag == -1){
         cout << "Invalid creds "<< endl;
    }
    else{
        cout << "login successfull "<< endl;
    }
    

    return 0;
}


