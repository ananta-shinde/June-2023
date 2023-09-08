#include<stdio.h>
main()
{
     char name[40];
     char surname[2][40];
     printf("Enter your name :");
    //  scanf("%s",name);
    gets(name);
     printf("Enter your name :");
     gets(surname[0]);
     gets(surname[1]);

     puts(name);
     printf("%s",surname);
    
}