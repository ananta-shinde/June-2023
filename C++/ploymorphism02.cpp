#include<stdio.h>

class Animal{
    public:
    virtual void  sound()
     {
        printf("universal sound\n");
     }
     void sound(int Hz)
     {
        printf("can sound with %d Hz\n",Hz);
     }
};

class Dog:public Animal{
    public:
    
     void sound()
     {
        printf("Bow bow\n");
     }  
};

class Human:Animal
{
    Dog * dog;
};

 


int main(int argc, char const *argv[])
{
    Dog d;
    d.sound();
    Animal *ptr;
    ptr = &d;
    ptr->sound();
    ptr->sound(40);
    return 0;
}
