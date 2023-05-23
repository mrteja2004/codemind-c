#include<stdio.h>
#include<math.h>
int main(){ 
int n,r,s=0,t,c=1,i,p=1;
 scanf("%d",&n); 
t=n;
 while(t!=0)
 {
 r=t%10;
 s=s*10+r;
 t=t/10;
 } 
t=s; s=0; 
while(t!=0)
 { 
r=t%10;
 for(i=1;i<=c;i++) 
{
 p=p*r;
 }
 s=s+p;
 t=t/10; 
c++;
 p=1;
 }
 if(s==n) 
{ 
printf("True"); 
} 
else
 {
 printf("False");
 }
}