#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
};

class SLinkedList{
    Node* head = NULL;
    public:
    void insertatStart(int data){

        Node* new_node = new Node();
        new_node->data = data;
        // if list is empty
          if(this->head == NULL)
          {
              head = new_node;
              return;
          }
        // if list is not empty
           else{
               new_node->next = head;
               head = new_node;
               return;
           }
    }

    void insertAtEnd(int data)
    {
        Node* new_node = new Node();
        new_node->data = data;
        // if list is empty
          if(this->head == NULL)
          {
              head = new_node;
              return;
          }
        // if list is not empty
           else{
              Node* temp = head;
              // find last node
               while(temp->next != NULL)
               {
                 temp =  temp->next;
               }
               temp->next = new_node;
               return;
           }
    }

    void insertAtPosition(int data, int index)
    {
        Node* new_node = new Node();
        new_node->data = data;
        // if list is empty
          if(this->head == NULL)
          {
              head = new_node;
              return;
          }
        // if list is not empty
           else{
              Node* temp = head;
              // find last node
              if(index == 0)
                 {
                    insertatStart(data);
                    return;
                 }
               int count  = 1 ;
                while(count < index)
                {
                    temp = temp->next;
                    count ++;
                }
                new_node->next = temp->next;
                temp->next = new_node;  
               return;
           }
    }

    void printList()
    {
        if(this->head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else{
            Node* temp = head;
            while(temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }
};


int main(int argc, char const *argv[])
{
     SLinkedList list;

     list.printList();
     // insert at start
     list.insertatStart(20);
     list.insertatStart(30);

     // insert at end
     list.insertAtEnd(50);
     list.insertAtEnd(60);
 
     // insert at position
     list.insertAtPosition(55,2);
      
     list.printList();

    return 0;
}
