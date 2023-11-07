#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* right = NULL;
    Node* left = NULL;
};

class BT {
     Node* root = NULL;

     public:
     void insert(int data){
        Node * new_node = new Node();
        new_node->data = data;
        root = new_node;
     }

     void printTree()
     {
        
     }
     int remove()
     {
        return 0;
     }
};
int main(int argc, char const *argv[])
{
     
     BT tree;
     tree.insert(20);


    return 0;
}
