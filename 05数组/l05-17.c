/* strcat(a,b) ��b���ӵ�a�ĺ��� */
#include <stdio.h>
#include <string.h>

void main()
{
	char a[80] = "";
	char b[30] = "";
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
 } 
