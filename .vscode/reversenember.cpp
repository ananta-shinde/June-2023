#include<stdio.h>
int main()
{
    int count = 0;
    int mf = 1;
    int n = 45124578;
    int r;
    int n1 = 0;
    int temp = n;
    for(n;n>0;n=n/10)
    {
        count ++;
    }
    n = temp;
    int tempcount = count;
    for(count; count >1;count --)
    {
         mf =  mf*10;
    }
    printf("\n mf = %d",mf);
    count = tempcount;
    for(count;count > 0; count--){
         r = n%10;
         n  = n/10;
         n1 =n1 + r*mf; 
         mf = mf/10;
        
    }

    printf("\nnew mumber = %d",n1);
}