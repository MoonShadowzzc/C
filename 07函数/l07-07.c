/* ʹ���Աຯ����������������ֵ--ֱ�Ӵ����޷�ʵ�ֽ��� */
#include <stdio.h>
void mySwap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void main()
{
	int x = 3, y = 5;
	printf("before: x=%d, y=%d\n", x, y);
	mySwap(x, y);
	printf("after : x=%d, y=%d", x, y);
}
