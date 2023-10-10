#include<stdio.h>

class Math{
     public:
     int a;
     int b;
    
    void add()
    {
        printf("addition from instance %d\n",a+b);
    }

};

void add(int a,int b)
{
    printf("%d\n",a+b);
}
void sub(int a,int b)
{
    printf("%d\n",a-b);
}
void mul(int a,int b)
{
    printf("%d\n",a*b);
}
int main(int argc, char const *argv[])
{

    Math m,m2;
    m.a = 20;
    m.b = 30;
    m.add();
    m2.a = 50;
    m2.b = 80;
    m2.add();
     
    add(25,55);
    sub(25,55);
    mul(25,55);
    
    
     
    return 0;
}
