#include <stdio.h>			// ����ͷ�ļ� ��׼������� 
#include <math.h> 			// ��ֵ���� 

/* һ��������C���Գ���ʾ�� */

int mysum(int m, int n);	// �������� 

int main(void) 				// ������ͷ 
{
	int a, b, x;			// �������� 
	double c, y, z;			 
	
	c = 4.0;				// ������ֵ 
	y = sqrt(c);
	a = 10;
	b = 20;
	
	x = mysum(a, b);
	z = x + y;
	
	printf("z = %lf\n", z);	// ��� 
	return 0; 				// ���������� 
}

int mysum(int m, int n)		// �������� 
{
	int k = 0, i;
	 
	for(i=m; i<=n; i++)		// ѭ�� 
		k = k + 1;
	return k; 
}

