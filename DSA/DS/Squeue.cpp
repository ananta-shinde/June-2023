#include<iostream>
using namespace std;

class Squeue{
    int arr[5];
    int front=-1,rear=-1;
    public:
    void insert(int data){
         if(rear < 4 )
         {
            if(rear == -1)
            {
                front++;   
            }
            rear++;
            arr[rear] = data;
         }
         else{
            cout << "Queue overflows" << endl;
         }
         
    }
};
int main(int argc, char const *argv[])
{
    Squeue sq;
    sq.insert(20);
    sq.insert(20);
    sq.insert(20);
    sq.insert(20);
    sq.insert(20);
    
    return 0;
}
