#include<stdio.h>
int main()
{
    int v;
    int sum=0;
    scanf("%d",&v);
//  printf("%d", (v*(v+1))/2);

    for(int i=1; i<=v;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}