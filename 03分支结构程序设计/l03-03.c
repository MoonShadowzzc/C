/* �߼�����--͵������ */
#include <stdio.h>
void main()
{
	int a = 1, b = 0;
	printf("%d", 0 && (a = 2));	// 0Ϊ���١�����ִ��a=2
	printf("a=%d", a);			// a=1
	printf("%d", 5 && (a = 2));	// 5Ϊ���桯��ִ��a=2
	printf("a=%d", a);			// a=2
	
	b = 1;
	printf("%d", 5 || (b = 2));	// 5Ϊ���桯����ִ��b=2
	printf("b=%d", b);			// b=1
	printf("%d", 0 || (b = 2));	// 0Ϊ���١���ִ��b=2
	printf("b=%d", b);			// b=2
}
