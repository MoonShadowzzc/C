#include <stdio.h>
/* ��ʾ�����ַ�*/
void main()
{
	char c1 = '\0',c2 = '\0';
	c1 = '\1';		// �ð˽��Ʊ�ʾת���ַ� 
	c2 = '\x1';		// ��ʮ�����Ʊ�ʾת���ַ� 
	printf("%c---%c \n", c1, c2);
	printf("%c---%c \n", '\25', '\x15');
	printf("I'm' \"OK\"\n") ;
}
