#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = { 20, 25 ,45 ,14 ,23};
    //  num%2 == 0
   // even numbers from array
   for(int i = 0;i<5;i++)
   {
    if(numbers[i]%2 == 0)
    {
        printf("%d",numbers[i]);
    } 
   }
   int sum  = 0;
   for(int i=0;i<5;i++)
   {
      sum = sum+numbers[i];

   }
   printf("%d",sum);
   for(int i=0;i<5;i++)
   {
         numbers[i] = numbers[i] + 5;
         printf("\n%d",numbers[i]);
   } 
    return 0;
}
