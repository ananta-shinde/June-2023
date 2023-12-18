#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;
};

class DLinkedList{
    Node* head = NULL;
    public:
    void insert(int data){
        // create new node
        Node* new_node = new Node();
        new_node->data= data;
          // if list is empty
          if(head == NULL)
          {
            head = new_node;
          }
          else{
            Node* temp = head;
            while(temp->next != NULL)
            {
               temp =temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
          }

    }

    void printList()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void deleteAtStart()
    {
         if(head == NULL)
          {
            cout << "list is empty, can not delete" << endl;
          }
          else{
                 head = head->next;
                 head->prev = NULL;
          }
    }
    void deleteByValue(int value)
    {
         if(head == NULL)
          {
            cout << "list is empty, can not delete" << endl;
          }
          else{
                 Node* temp = head;
                 while(temp->data != value)
                { 
                      temp =  temp->next;
                      if(temp == NULL)
                        {
                            cout << " No element found "<< endl;
                            return;
                        }
                }
                
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->prev = NULL;
                temp->next = NULL;
                
               
          }
    }

    void deleteAtEnd()
    {
         if(head == NULL)
          {
            cout << "list is empty, can not delete" << endl;
          }
          else{
                Node* temp = head;
                while(temp->next != NULL)
                { 
                      temp =  temp->next;
                }
                temp->prev->next =  NULL;
                temp->prev = NULL;
          }
    }

    void printListReverse()
    {
         Node* temp = head;
            while(temp->next != NULL)
            {
               
               temp =temp->next;
            }
        while(temp !=NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
    }
};

int main(int argc, char const *argv[])
{
    DLinkedList dlist;
     
    dlist.insert(20);
    dlist.insert(30);
    dlist.insert(40);
    dlist.insert(50);

    dlist.deleteByValue(140);
    // dlist.deleteAtStart();
    // dlist.deleteAtEnd();
     

    dlist.printList();
    dlist.printListReverse();
    return 0;
}
