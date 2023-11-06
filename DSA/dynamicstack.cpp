#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next = NULL;
};

class Stack{
    Node *  head =  NULL;
    public :
    void push(int data)
    {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = (this->head);
        this->head = new_node;
    }

    void pop()
        {
            Node* current = this->head;
            cout << "POP:"<<current->data << endl;
            head = current->next;   
        }
};

int main(int argc, char const *argv[])
{
    
     Stack stack;
     stack.push(55);
     stack.push(65);
     stack.push(75);

    stack.pop();
    stack.pop();
    stack.push(80);
    stack.pop();

    return 0;
}
