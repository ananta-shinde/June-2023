#include<stdio.h>
int main()
{
    int mrp,discount,finalPrice;
    printf("welcome to tally\n");
    printf("Enter MRP :");
    scanf("%d",&mrp);
    printf("Enter discount in % : ");
    scanf("%d",&discount);
    if(discount < 100) {
    finalPrice = mrp - (mrp * discount/100);
    printf("final price is : %d",finalPrice);
    }
    if(discount > 100){
    printf("Invalid discount value");
    } 
    return 0;
}