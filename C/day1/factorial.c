#include<stdio.h>
int main()
{
    int prd=1;
    int v, i;
    scanf("%d",&v);
    for(i=1 ; i<=v ; i++)
{
    prd=prd*i;
    
}
printf("%d",prd);
return 0;

    
}