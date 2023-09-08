#include<stdio.h>
int main()
{
   int i = 0;
   int noOfstars = 10;
   int noofrows = 5;
   while(i < (noofrows * noOfstars))
   {
        printf("*");
        i = i +1;
        if(i% noOfstars == 0)
        {
            printf("\n");
        }
   }
    
    
}