#include<iostream>
using namespace std;
 
class Queue{
    int arr[5];
    int front = 0;
    int rear = -1;
    int size = 0;
    public:
    
    bool isFull()
    {
         if(this->size > 4)
         {
            return true;
         }
         else{
             return false;
         }
    }
    bool isEmpty()
    {
         if(this->size == 0)
         {
            return true;
         }
         else{
             return false;
         }
    }

    void insert(int data)
    {
        if(isFull())
        {
            cout << "queue overflows" << endl;
        }
        else{
            this->rear++;
            this->arr[this->rear] = data;
            this->size++;
        }
    }
    int dqueue()
    {
        if(isEmpty())
        {
            cout << "queue underflows" << endl;
            return 0;
        }
        else{
            
            int data = this->arr[front];
            this->front = this->front+1;
            this->size--;
            return data;
        }
    }

    int getFront()
    {
        return this->arr[front];
    }
    int getRear()
    {
        return this->arr[rear];
    }

};
int main(int argc, char const *argv[])
{
    Queue q;
    cout <<  q.isEmpty() << endl;
    q.insert(20);
    q.insert(50);
    q.insert(80);
    cout << "Front : "<< q.getFront();
    cout << "Rear : "<< q.getRear();
    q.insert(30);
    q.insert(20);
    q.insert(20);
    q.dqueue();
    q.dqueue();
    q.dqueue();
    q.dqueue();
    q.dqueue();
    
     
     
    return 0;
}
