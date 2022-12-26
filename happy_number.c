#include<stdio.h>
int main()
{
    int a,b,c,s=0,i;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        s=s+(b*b);
        a=a/10;
        if(a==0 && s>=1 && s<10)
        {
            if(s==7 || s==1)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
        }
        else if(a==0 && s>=10)
        {
            a=s;
            s=0;
        }
    }
}