#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    for(c=1;1<=(a*b);c++)
    {
        if(c%a==0 && c%b==0)
        break;
    }
    printf("%d",c);
}