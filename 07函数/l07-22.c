/* ָ������ָ�� */
#include <stdio.h>

long int mysum(int n);
long int myfac(int n);

void main() 
{
	int n=0; long x=0;
	long (*p)(int n);
	scanf("%d", &n);
	p = mysum;
	x = (*p)(n);
	printf("sum=%ld\n", x);
	p = myfac;
	x = (*p)(n);
	printf("fac = %ld\n", x);
}

long int mysum(int n)
{
	int i=0; long sum=0;
	for(i=0; i<n; i++)
		sum += i;
	return sum;
}

long int myfac(int n)
{
	int i=0; long fac=1;
	for(i=1; i<=n; i++)
		fac *= i;
	return fac;
}
