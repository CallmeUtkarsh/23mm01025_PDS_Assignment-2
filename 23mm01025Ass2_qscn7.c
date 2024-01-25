#include<stdio.h>

int main(){
    int meal_price,tip_percent,tax_percent;
    printf("enter meal price=\n");
    scanf("%d",&meal_price);
    printf("enter tip percent=\n");
    scanf("%d",&tip_percent);
    printf("enter tax percent=\n");
    scanf("%d",&tax_percent);
    int total=meal_price+(((meal_price)*(tip_percent))/100)+(((meal_price)*(tax_percent))/100);
    printf("your total bill is %d",total);
    return 0;
}