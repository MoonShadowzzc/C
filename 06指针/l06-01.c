/* ָ������Ķ�������� */
#include <stdio.h>
void main()
{
	int a = 0;
	int *p;		// ָ��Ķ��� ������Ϊp 
	p = &a;		// ��a�ĵ�ַ���� p 
	*p = 5;     // *p ��a �ǵȼ۵� 
	printf("a = %d", a);
}
