/* �����ַ��������ú���ͳ�����д�д��ĸ�ĸ�����������
  ������Ϊ����ֵ�������������������������ͳ�ƽ���� */
#include <stdio.h>
int countA(char *p);

void main()
{
	char s[50];
	int n;
	printf("Input string:");
	gets(s);
	n = countA(s);
	printf("Number : %d", n);
}

int countA(char *p)
{
	int n = 0;
	while(*p != '\0')
	{
		if(*p >= 'A' && *p <= 'Z')
			n++;
		p++;
	}
	return n;
}
