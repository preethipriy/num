#include<stdio.h>
int main()
{
int n,a[20],i,j,t;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d%d",a[1],a[n]);
return 0;
}
