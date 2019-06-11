#include<stdio.h>
int main()
{
unsigned long long int factorialnum=1;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	factorialnum*=i;
}
printf("%lld",factorialnum);
}
