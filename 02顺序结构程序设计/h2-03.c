/* 
  �Ӽ����������������ַ����ֱ������ַ��ͱ���a��b�У�
 Ҫ��ͨ������������������Ӻ���������磬�����ַ���
 ���֡�7���͡�5�����������12                         
*/
#include <stdio.h>
void main()
{
	char a = '0';
    char b = '0';
	printf("Input a, b(Type of char):\n");
	scanf("%c,%c",&a, &b);
	int sum = (a-'0') +(b-'0');

	printf("%c + %c = %d", a, b, sum);
}
