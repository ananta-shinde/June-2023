#include<stdio.h>

class Animal{
    public:
    // method overliading
    // 1. both menthods should be in same class
    // 2. same name
    // 3. different no of parameter
    // 4. methods can not be overloaded by return type alone
    Animal()
    {
        printf("\nAnimal constructor is called");
    }
    
    void eat()
    {
        printf("\neating notmally");
    }

    void teat()
    {
        printf("\neating abonormally");
    }
    void eat(int howMany)
    {
        printf("\neating notmally %d times",howMany);
    }
};

class Panda :public Animal{

    public:

    // constructor : method having same name as class and no return type
     Panda()
     {  
        printf("\nPanda constructor is called");
     }


    // method overwride 
    //1. Methoda are in different class, related through inheritance
    //2. Same name
    //3. child class should define its own implementation
     void eat()
     {
        printf("\nI eat while sleep");
     }
};
int main(int argc, char const *argv[])
{
    Animal animal;
    animal.eat(2);
    Panda pop;
    animal.eat();
    pop.teat();
    return 0;
}
