#include<stdio.h>
int main()
{
    int e,m,p,ch,co;
    scanf("%d%d%d%d%d",&e,&m,&p,&ch,&co);
    if(e>35 && m>35 && p>35 && ch>35 && co>35)
    printf("PASSED");
    else
    printf("FAILED");
}