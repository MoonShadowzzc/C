/* Ԥ��������-#define  #undef */
#include <stdio.h>
#define N 3+5
void main() 
{
	int a=0, b=0;
	a = 2*N;		// a=2*3+5   ԭ���滻�������� 
	b = 2*(N);		// b=2*(3+5)
	printf("a = %d, b = %d", a, b);
}
