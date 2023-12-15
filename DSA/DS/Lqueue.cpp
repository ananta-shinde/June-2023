#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
};

class LQueue{
    Node* front = NULL;
    Node* rear = NULL;
    public:
    void insert(int data){

        Node* new_node = new Node();
        new_node->data = data;
        // if queue is empty
          if(front == NULL)
          {
              front = new_node;
              rear = new_node; 
              return;
          }
        // if list is not empty
           else{
               rear->next = new_node;
               rear = new_node;
               return;
           }
    }

    
    int deleteQ()
    {
       if(front == NULL)
       {
          cout << "list is empty" << endl;
          return -1;
       }
       else{
           int data = front->data;
           front = front->next;
           return data;
       }
    };

    int getFront()
    {
        if(front == NULL)
       {
          cout << "list is empty" << endl;
          return -1;
       }
       else{
           return front->data;
       }
    }

};
     

int main(int argc, char const *argv[])
{
      
     
    LQueue lq;
    lq.insert(20);
    lq.insert(30);
    lq.insert(40);

    cout << lq.deleteQ() << endl;
    cout << lq.deleteQ() << endl;
    cout << lq.deleteQ() << endl;
    cout << lq.deleteQ() << endl;

    return 0;
}
