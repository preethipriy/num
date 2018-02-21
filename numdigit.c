#include<stdio.h>
#include<conio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}
