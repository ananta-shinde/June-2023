#include<stdio.h>

class Square{
     int width;

     public:
     int getWidth()
     {
        return this->width;
     }
     Square(int w)
     {
        this->width = w;
     }
     Square()
     {
        this->width = 0;
     }

     Square operator+(Square s){
            Square result;
            result.width = this->width + s.width;
            return result;
     }

};
int main(int argc, char const *argv[])
{
    Square s1(50);
    Square s2(40);
    printf("%d\n",s1.getWidth());
    s1=s1+s2;
    printf("%d\n",s1.getWidth());
    return 0;
}
