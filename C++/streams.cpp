 #include<iostream>
 #include<fstream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
    string message = "Welcome to streams";
    cout << message << endl;
    // cout.write("Welcome to streams",5);
     
    ofstream fout;
    fout.open("data.txt");
    fout << message << endl ;
   
    message = "This is file handling demo";
    fout << message << endl;

    message = "This is third edit";
    fout << message << endl;

    fout.close();

    ifstream fin;
    char str[20];
    char str2[20];
    char str3[20];
    fin.open("data.txt");

    // fin >> str >> str2;
    // fin.read(str,20);
    fin.getline(str,20);
    fin.getline(str2,30);
    fin.getline(str3,30);
    cout << str <<endl;
    cout << str2 <<endl;
    cout << str3 <<endl;

    fin.close();


    return 0;
 }
 