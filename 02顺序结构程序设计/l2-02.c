#include <stdio.h>
/* �Ӽ����������������ֱ����a,b,c�У������ǵ�ƽ��ֵ  */
void main()
{
	double a=0,b=0,c=0,avg=0;
	
	printf("Input a, b, c:");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("a=%lf, b=%lf, c=%lf\n", a, b, c);
	avg = (a+b+c)/3;
	printf("avg = %le",avg);
 } 
