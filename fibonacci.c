#include<stdio.h>
int main()
{
    int a,i,b,c=0,n;
    a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}