/* ʹ���Աຯ����������������ֵ--ͨ������ַʵ�ֽ��� */
#include <stdio.h>
int mySwap(int *p, int *q)
{
	int t = 0;
	t = *q; 
	*q = *p;
	*p = t;
} 

void main()
{
	int x = 3, y = 5;
	printf("before: x=%d, y=%d\n", x, y);
	mySwap(&x, &y);
	printf("after d: x=%d, y=%d", x, y);
}
