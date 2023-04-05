#include<stdio.h>
int main()
{
    int taka;
    printf("Please enter your money = ");
    scanf("%d",&taka);
    if(taka >= 10000)
    {
        printf("Yes you can go to India\n");
        if(taka>=11000){
            printf("You go to Nepal too");
        }
        else{
            printf("Then you have to return home");
        }
    }
    // else if (taka>=50){
    //     printf("You can buy fuchka");
    // }
    // else if (taka>=30){
    //     printf("You can buy IceCream");
    // }
    else{
        printf("You can't go to anywhere");
    }
    return 0;
}