/* strcpy(a,b)�ַ�������--��b���Ƶ�a�� */
#include <stdio.h>
#include <string.h>

void main()
{
	char a[50] = "";
	char b[90] = "";
	
	gets(a);
	strcpy(b,a);
	puts(b); 
} 
