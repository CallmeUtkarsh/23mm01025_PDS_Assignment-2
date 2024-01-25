#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter value of a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c?printf("max value is %d",a):(b>a&&b>c?printf("max value is %d",b):printf("max value is %d",c));
    return 0;
}