/* ��̬�洢�����;�̬�洢���� */
#include <stdio.h>
int myfun();
void main()
{
	int i=0, a=0;
	for(i=1; i<=2; i++)
	{
		a = myfun();
		printf("%4d", a);
	}
} 
//   6   8
int myfun()
{
	auto int x=1;	// ��̬�洢���� 
	static int y=1;	// ��̬�洢���� 
	x = x + 2;
	y = y + 2;
	return x+y;
}
