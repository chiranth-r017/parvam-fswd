#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    if(var>0 && var<=12)
    {
        printf("Child");
    }
    else if(var>=13 && var<=20)
    {
        printf("Teenage");
    }
    else if(var>=21 && var<=59)
    {
        printf("adult");
    }
    else if(var>=60)
    {
        printf("senior citizen");
    }
    else{
        printf("invalid");
    }
}