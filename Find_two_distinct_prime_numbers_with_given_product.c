#include<stdio.h>
int prime(int n)
{
    int c=0,flag=0,i;
    for(i=1;i<=n;i++)
    {
	if(n%i==0)
    	{
		
        c=c+1;
    }
    
    }
    if(c==2)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}
int main()
{
    int n,i,j,p,q,c=0;
    scanf("%d",&n);
    for(i=2;i<=10000;i++)
    {
        for(j=2;j<=10000;j++)
        {
            if(i!=j && i*j==n)
            {
                if(prime(i)==1 && prime(j)==1)
                {
                    p=i;
                    q=j;
                    c=1;
                }
            }
        }
    }
    if(c==1)
    {
    	printf("%d %d",q,p);
	}
	else
	{
		printf("-1");
	}
}