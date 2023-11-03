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

//insert with position
void insertAtPosition(Node** head,int data,int postion)
{
    Node* new_node = new Node();
     Node* current = *head;
    new_node->data = data;
     
    if(*head  == NULL)
    {
        current = new_node;
    }
    else if(postion == 0){
          push(head,data);
    }
    else{
        for(int i = 1;i<postion;i++)
        {
              current =  current->next;
        }
        new_node->next = current->next;
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

//delete at start
void pop(Node** head)
{
    Node* current = *head;
    *head = current->next;
}

void deleteAtPosition(Node** head,int position)
{
    Node* current = *head;
    if(position == 0)
    {
        pop(head);
    }
    else{
        for(int i=1;i<position;i++){
            current = current->next;
        }
        current->next = current->next->next;
    }
   
} 

// delete at end
void deleteAtEnd(Node** head)
{
    Node* current = *head;
    while(current->next->next != NULL)
    {
         current =  current->next;
    }
    current->next = NULL;
}

// update by value
void updateAllByValue(Node** head,int value,int updateVal)
{
    Node* current = *head;
    while(current != NULL)
    {
         
        if(current->data == value){
            current->data = updateVal;
        }
        current = current->next;
    }
}

void updateByValue(Node** head,int value,int updateVal)
{
    Node* current = *head;
    while(current != NULL)
    {
         
        if(current->data == value){
            current->data = updateVal;
            break;
        }
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
    insertAtPosition(&head,50,3);
    insertAtPosition(&head,62,0);
    pop(&head);
    printList(head);
    cout << endl;
    deleteAtPosition(&head,2);
    // deleteAtEnd(&head);
    // deleteAtEnd(&head);
    printList(head);
    updateAllByValue(&head,50,75);
    updateByValue(&head,75,33);
    cout << endl;
    printList(head);
    return 0;
}


