#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top = -1;
    public:
    void push(int data)
    {
        if(top < 4)
        {
            top++;
            arr[top] = data;
        }
        else{
            cout << "stack overflows" <<endl;
        }
        
    }

    int pop()
    {   
        if(top >-1){
            int data = arr[top];
            top--;
            return data;
        }
        else{
            cout << "stack underflows" << endl;
        }
    }

};

int main(int argc, char const *argv[])
{
    Stack st;
    st.push(20);
    st.push(30);
    cout << st.pop() << endl;
    cout << st.pop() << endl; 
    
    return 0;
}
