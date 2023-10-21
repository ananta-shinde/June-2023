#include<stdio.h>
class Instrument{

    public :
   virtual void sound()
    {
         printf("no sound");
    }
};

class Guitar:public Instrument{
    public:
    void sound()
    {
        printf("\nsounds really sweet");
    }
    
};

class Tabla{
    public:
    void sound()
    {
        printf("\nsounds tabs tabs");
    }
};

int main(int argc, char const *argv[])
{
    Instrument it;
    it.sound();
    Guitar g;
    Instrument * ptr;
    ptr = &g;
    ptr = &it;
    ptr->sound();
     
    return 0;
}
