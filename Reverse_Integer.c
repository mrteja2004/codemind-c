#include<stdio.h>
int main()
{
    int a,b,c,d,i,s=0;
    scanf("%d",&a);
   for(i=a;i!=0;i=i/10)
   {
       b=i%10;
       s=s*10+b;
   }
   printf("%d",s);
}