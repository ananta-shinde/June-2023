#include<iostream>
using namespace std;
class Cqueue{
    int arr[5];
    int front = -1;
    int rear = -1;
    public:

    void reset()
    {
         front = -1;
                rear = -1;
    }
   
    bool isEmpty()
    {
         if( rear == -1 || front > rear)
         {
            if(front > rear)
            {
                reset();
            }
            return true;
         }
         else{
            return false;
         }
    }

    bool isFull(){
           if( rear == 4 && front == 0)
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
            cout << "list is full try after some time" << endl;
         } 
         else if(isEmpty()){
                  front++;
                  rear++;
                  arr[rear] = data;
         }
         else{
                  if(rear < 4)
                  {
                      rear++;
                  }
                  else{
                      rear = 0;
                  }
                
                  arr[rear] = data;
         }
        
    }

    int deleteFromQueue()
    {
        if(isEmpty())
        {
            cout << "list is empty can not delete " << endl;
            return -1;
        }
        else{
            int data = arr[front];
            front++;
            return data;
        }
    }
};


int main(int argc, char const *argv[])
{
    
    Cqueue cq;
    cout << cq.isFull() << endl;
    cq.insert(20);
    cq.insert(20);
    cq.deleteFromQueue();
    cq.deleteFromQueue();
    cq.insert(20);
    cq.insert(20);
    cq.insert(20);
    cq.insert(20);
    cq.insert(20);

    // cout << cq.deleteFromQueue() <<endl;
    cout << cq.isFull() << endl;
    return 0;
}
