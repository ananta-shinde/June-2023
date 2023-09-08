#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[40] = "Ananta";
    char newName[40];
   for(int i=0;i<40;i++)
   {
         if(name[i] == '\0'){
            break;
         }
         newName[i] = name[i];
   }

   puts(newName);
   
    
    return 0;
}
