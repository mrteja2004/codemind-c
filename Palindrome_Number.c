#include<stdio.h>
int main()
{ 
int i,n,m; 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&m);
 int a=m; 
int s=0; 
while(m!=0)
 { 
int h=m%10; 
s=s*10+h; 
m=m/10;
 } 
if(s==a)
 {
 printf("True
");
 }
 else
 { 
printf("False
");
 }
 }
}