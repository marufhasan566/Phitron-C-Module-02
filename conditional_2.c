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
    else if (taka>=50){
        printf("You can buy fuchka");
    }
    else if (taka>=30){
        printf("You can buy IceCream");
    }
    else{
        printf("You can't buy any food");
    }
    return 0;
}