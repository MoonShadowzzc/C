/* 
  �Ӽ����������������ַ����ֱ������ַ��ͱ���a��b�У�
 Ҫ��ͨ������������������Ӻ���������磬�����ַ���
 ���֡�7���͡�5�����������12                         
*/
#include <stdio.h>
void main()
{
	char a = '\0', b = '\0';
	printf("Input a(Type of char):");
	a = getchar();
	printf("Input b(Type of char):");
	b = getchar();
	int sum = (a-'0') +(b-'0');
	printf("%c + %c = %d", a, b, sum);
}
