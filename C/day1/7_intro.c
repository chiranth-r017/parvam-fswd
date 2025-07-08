// we use else if when both if and else if statements are true
#include<stdio.h>
int main()
{
    int var=10;
    if(var%2==0)
    {
        printf("the number is div by 2");
    }
    else if(var%3==0)
    {
        printf("the number is also div by 3");
    }
    else
    {
        printf("the number is not div by both 2&3");
    }
}