/* ʹ���Աຯ��mypow����x��y���� */
#include <stdio.h>
double mypow(double x, int y)
{
	double z = 1.0; 
	int i = 0;
	for(i = 1 ; i <= y; ++i)
	{
		z *= x;
	}
	return z;
}
void main()
{
	double x = 0, z = 0;
	int y = 0;
	
	printf("Input x, y:");
	scanf("%lf,%d", &x, &y);
	z = mypow(x,y);
	printf("%lf��%d���ݵĽ��Ϊ��%lf", x, y, z);
}
