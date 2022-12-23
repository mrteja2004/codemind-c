#include<stdio.h>
int main()
{
    int a,b,n,k,i;
    scanf("%d%d%d",&a,&b,&n);
    for(i=b;i<=n;i++)
    {
        k=a*i;
        printf("%d x %d = %d
",a,i,k);
    }
}