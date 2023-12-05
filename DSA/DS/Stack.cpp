#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
};

class MyStack{
    Node* top = NULL;
    public:
    void push(int data){

        Node* new_node = new Node();
        new_node->data = data;
        // if list is empty
          if(this->top == NULL)
          {
              top = new_node;
              return;
          }
        // if list is not empty
           else{
               new_node->next = top;
               top = new_node;
               return;
           }
    }

    void peek()
    {
        cout << "top : " << top->data <<endl;
    }

    int pop()
    {
       if(top != NULL)
       {
            if(top->next == NULL)
         {
            int data=  top->data;
            top = NULL;
            return data;
         }
         else{
             int data=  top->data;
             top = top->next;
             return data;
         }
       }
       else{
           cout << "Stack is empty" << endl;
           return -1;
       } 
    }

};  

int main(int argc, char const *argv[])
{
     MyStack st;
     
     st.push(20);
     st.push(40);
     st.push(50);

     cout << st.pop() << endl;
     cout << st.pop() << endl;
    
     st.peek();
     

    return 0;
}
