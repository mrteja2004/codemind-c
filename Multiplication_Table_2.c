#include<stdio.h>
int main()
{
    int a,n,k,i;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        k=a*i;
        printf("%d x %d = %d
",a,i,k);
    }
}