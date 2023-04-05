#include<stdio.h>
int main()
{
    int taka;
    printf("Please enter your money = ");
    scanf("%d",&taka);
    if(taka >= 100)
    {
        printf("Yes you can buy burger");
    }
    else{
        printf("You can't buy burger");
    }
    return 0;
}