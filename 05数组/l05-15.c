/* �ַ��������� */
#include <stdio.h> 
#include <string.h>	// �ַ�������ͷ����

void main()
{
	char a[80] = "";
	int count = 0;
	gets(a);
	count = strlen(a);
	printf("%s�ĳ���Ϊ%d", a, count);
} 
