#include<stdio.h>

int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    number>=100&&number<=200&&number%2!=0?printf("True"):printf("False");   
    return 0;
}