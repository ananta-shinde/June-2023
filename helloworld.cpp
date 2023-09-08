#include<stdio.h>
int main()
{
     int rollNo;
     printf("value for roll no : %d",rollNo);
     printf("\naddress for roll no : %d",&rollNo);
     scanf("%d",&rollNo); // rollNo = 40
     printf("\nvalue for roll no : %d",rollNo);
     return 0;
}