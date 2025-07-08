/*there are three types of loops 1.for 2.while 3.do-while*/
/*for(init;cond;inc/dec)
{
//CODE
}*/
#include<stdio.h>
int main()
{
    for(int v=0; v<50;v++)
    {
        if(v%2==0)
        {
            printf("%d\n",v);
        }
        else{
            printf("");
        }
    }
}
/*while()*/