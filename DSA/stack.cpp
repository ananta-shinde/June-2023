#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top = -1;
    public:
    void push(int data)
    {
        if(this->top < 5)
        {
            this->top++;
            this->arr[top] = data; 
        }
        else{
            cout << "Stack overflows" << endl;
        }
       
    }
    int pop()
    {
        if(this->top >= 0)
        {
            int data = this->arr[top];
             cout << "POP : " << data   << endl;
            this->top --;
            return data;
        }
        else{
            cout << "Stack underflows" << endl;
        }
       
    }
    int peek()
    {
        if(top != -1){
            cout << this->arr[top] << endl;
        }
        else{
             cout << "Stack underflows" << endl;
        }
            }        
};



int main(int argc, char const *argv[])
{
    Stack stack;
    stack.push(20);
    stack.push(30);
    stack.push(50);

    stack.peek();

    stack.pop();
    stack.peek();
    stack.pop();
    stack.pop();
    stack.peek();
    
    // stack.pop();

   
    
    return 0;
}
