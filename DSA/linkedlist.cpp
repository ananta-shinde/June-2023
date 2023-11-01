#include<iostream>
using namespace std;

struct node{
    int data;
    node *next = NULL;
};




int main(int argc, char const *argv[])
{
    node * start = NULL;
    node n1;
    start = &n1;
    n1.data = 100;
    cout << start << endl;
    cout << start->data << endl;
    node n2;
    n2.data = 110;
    start->next= &n2;
    cout << start->data;
    cout << start->next->data;

    return 0;
}
