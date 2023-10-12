#include<stdio.h>

class Shape{
    public:
       int width;
       int height;
      
      void area()
      {
         printf("\nArea of shape");
      }
};

class Circle:public Shape{
     public:
      int radius;
      
      void area()
      {
         printf("\nArea of circle");
      }
};

class Rectangle :public Shape{
     
     public:
     // overiding area method from Shape
    void area()
      {
          printf("Area : %d",width*height);
      }

};

int main(int argc, char const *argv[])
{
    Rectangle r,p;
    Shape s;
    Circle c;
    r.width = 100;
    r.height = 50;
    r.area();
    p.height = 40;
    p.width = 20;
    p.area();
    s.area();
    c.area();
    
    return 0;
}
