#include<stdio.h>
int main()
{ 
int n; 
scanf("%d",&n); 
while(n--) 
{
 int m,i,j; 
scanf("%d",&m); 
char ar[m];
 scanf("%s",ar); 
int c=0;
 for(i=0;i<m;i++)
 { 
for(j=i;j<m;j++)
 { 
if(ar[i]=='1' && ar[j]=='1')
 { 
c++;
 }
 }
 } 
printf("%d
",c);
 }
}
