#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next = NULL;
};

// insert at start
void push(Node** head,int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// insert at end
void insertAtEnd(Node** head,int data)
{
    Node* new_node = new Node();
     Node* current = *head;
    new_node->data = data;
    // new_node->next = *head;
    // *head = new_node;
    if(*head  == NULL)
    {
        *head = new_node;
    }
    else{
        while(current->next != NULL)
        {
              current =  current->next;
        }
        current->next = new_node;
    }
}

void printList(Node* head)
{
   Node* current = head;
   while(current != NULL){
      cout << current->data << " ";
      current = current->next;
   }
}


int main(int argc, char const *argv[])
{
    Node* head = NULL;
    push(&head,20);
    push(&head,30);
    push(&head,40);
    insertAtEnd(&head,50);
   
    printList(head);
    



    return 0;
}


