#include <stdio.h>
/* ����һ����λ����������ÿһλ���ֵĺ�*/
void main()
{
	int n=0,a=0,b=0,c=0,sum=0;
	printf("Input N: ");
	scanf("%d", &n);
	a = n/100;
	b = n%100/10;
	c = n%10;
	sum = a+b+c;
	printf("n=%d,sum=%d",n,sum);
}
