/* ��������Ϊʵ�εĳ��� */
#include <stdio.h>
void myout(int *p, int n);
void main()
{
	int a[5] = {1,2,3,4,5};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	myout(a, 5);		// һά�����������鳤����Ϊʵ�� 
	myout(b, 10);
}

void myout(int *p, int n)	// һά��������Ӧ���β���ָ�����p 
{
	int i = 0;
	for(i=0; i<n; i++)		// ���ʱָ�벢���ƶ� 
		printf("%3d", *(p+i));
	printf("\n"); 
}
