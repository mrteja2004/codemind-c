#include<stdio.h>
int main()
{
    long int a,i,b,c=0;
    scanf("%ld",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}