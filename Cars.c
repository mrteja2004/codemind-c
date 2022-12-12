#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d",&a);
    if(a%4==0)
    {
        b=a/4;
        printf("%d",b);
    }
    else
    {
        printf("%d",a/4+1);
    }
}