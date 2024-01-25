#include<stdio.h>

int main(){
    int days;
    printf("enter total number of days :");
    scanf("%d",&days);
    
    int years=days/365;
    printf("number of years:%d\n",years);
    
    int months=(days-years*365)/30;
    printf("number of months:%d\n",months);

    int weeks=(days-years*365-months*30)/7;
    printf("number of weeks:%d\n",weeks);

    int day=((days-years*365-months*30-weeks*7));
    printf("number of days:%d\n",day);
    
    return 0;
}