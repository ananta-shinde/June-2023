#include<iostream>
#include<fstream>
#include<string.h>
#include"student.h"
using namespace std;

 
int main(int argc, char const *argv[])
{
    Student s;
    ifstream fin;
    fin.open("data.txt");
    
    while(!fin.eof()){
       fin.read((char*)&s,sizeof(s));
       s.printStudent();
    }
    

    return 0;
}


