/* ͨ��ָ����������ַ��� */
#include <stdio.h>
void main() 
{
	char *p = "first";
	puts(p);
	p = "second";
	for( ; *p!='\0'; p++)
		putchar(*p);
}
