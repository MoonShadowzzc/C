/* ���������������������a��b�У����ʱ��֤a�е�ֵ������b�еĴ� */
#include <stdio.h>
void main()
{
	int a = 0, b = 0, t = 0;
	printf("Input a, b:");
	scanf("%d,%d", &a, &b);
	if (a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	printf("a = %d, b = %d", a, b);
}
