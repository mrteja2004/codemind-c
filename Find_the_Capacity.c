#include<stdio.h>
int main()
{
    int arr[3],i,p=1;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        p=p*arr[i];
    }
    printf("%dKB",p);
}