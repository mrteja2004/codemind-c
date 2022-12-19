#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a+b)>10)
    {
        int c;
        c=21-(a+b);
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}