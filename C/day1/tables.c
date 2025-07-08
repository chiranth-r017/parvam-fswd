#include<stdio.h>
int main()
{
    int v;
    int n=10;
    printf("enter the number");
    scanf("%d",&v);
    for(n=1;n<10;n++)
    {
    printf("%d x %d = %d\n",v, n+1, v*(n+1));
    }
}