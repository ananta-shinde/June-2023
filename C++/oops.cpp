#include<stdio.h>

class Car{
    public:
    int enginePower = 1000;
    int noOfWheels = 4;
    char fuelType[10] = "Desiel";
    bool acOrNonAc = true;
};
int main(int argc, char const *argv[])
{
   
    Car swift;
    printf("enginPower : %d",swift.enginePower);
    return 0;
}
