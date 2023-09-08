#include<stdio.h>
int main(int argc, char const *argv[])
{
   char input[40] = "Entechno Solution";
   int count = 0;
   for(int i=0;i<40;i++)
   {
      if(input[i] == 'a' || input[i] == 'e'
      || input[i] == 'i' || input[i] == 'o'
      || input[i] == 'u')
      {
        count++;
      }
      
   }
   printf("%d",count);
    return 0;
}
