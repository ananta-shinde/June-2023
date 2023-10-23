#include<stdio.h>
#include<string.h>
class Me{
     private: 
     char name[10];
     protected :
     int myMoney;
     public:
     Me()
     {
        strcpy(this->name,"Ananta");
        this->myMoney = 20000;
     }
     friend class Myfriend;

};
class Myfriend{
    public:
      void showFriend(Me m)
      {
          printf("Name %s\n",m.name);
          printf("Money %d\n",m.myMoney);
      }
};
int main(int argc, char const *argv[])
{
    Myfriend f;
    Me me;
    f.showFriend(me);


    
    return 0;
}
