#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next = NULL;
};

class CircluarList{
      Node* head = NULL;
      public:
      void insert(int data)
      {
           Node* new_node = new Node();
           new_node->data = data;

           if(head == NULL)
           {
                 head = new_node;
                 new_node->next = head;
           }else{
                 new_node->next = head;
                 Node* temp = head;
                 while(temp->next != head)
                 {
                     temp = temp->next;
                 }
                 temp->next = new_node;
           }
      }

      void deleteElementAtStart()
      {
          if(head == NULL)
          {
            cout << "list is empty "<< endl;
        
          }
          else{
            Node* temp = head;
            while(temp->next != head)
            {
                temp = temp->next;
            }
            head = head->next;
            temp->next = head;
          }
      }


      void printList()
        {
            cout << head->data << " ";
        Node* temp = head->next;
            while(temp != head){
                cout << temp->data << " ";
                temp = temp->next;
                
            }
        }
};

int main(int argc, char const *argv[])
{
    CircluarList list;
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.deleteElementAtStart();
    list.printList();
    return 0;
}
