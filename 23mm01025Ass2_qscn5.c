#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num&1==1){
        printf("Number is odd");
    }
    
    else{
        printf("Number is even");
    }
    return 0;
}