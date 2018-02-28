#include<stdio.h>
int main()
{
char a[10],b[10];
int n,m;
scanf("%s",&a);
scanf("%s",&b);
n=strlen(a);
m=strlen(b);
if(n>m)
{
printf("%s",a);
}
else if(n==m)
{
printf("%s",b);
}
else
{
printf("%s",b);
}
return 0;
}
