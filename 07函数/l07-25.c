/* #undef */
#include <stdio.h>
#define N 3.14159 	// ��ʱN�����ַ���3.14159
void fun();
void main() 
{
	printf("N=%f\n",N);
	fun();
}

#undef N		// ��ʱN�Ѿ����Ǻ��� 
#define N 3+5	// N �����ַ���3+5 
#define M 2*N 	// M �����ַ���2*3+5
void fun()
{
	printf("N=%d, M=%d", N,M);
 } 
