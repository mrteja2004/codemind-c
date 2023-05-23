#include<stdio.h>
int main()
{ 
int n,i,j,k,l;
 scanf("%d",&l);
 int a[100]; 
for(k=0;k<l;k++)
 { 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&a[i]);
 } 
int d=0,s,c=0;
 for(i=0;i<n;i++) 
{ 
for(j=i+1;j<n;j++) 
{ 
if(a[i]>a[j])
 { 
d=a[i]; a[i]=a[j]; 
a[j]=d; c++;
 } 
}
 } 
if(c==0)
 { 
printf("0");
 } 
else
 {
 s=a[n-1]-a[0];
 printf("%d
",s);
 }
 }
}
