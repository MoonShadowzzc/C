/* ����������ͬ�������������a, b, c�У��ٰ���
   ����������С�����˳�����·���a,b,c������� */
#include <stdio.h>
void main()
{
	int a, b, c, t;
	
	printf("Input a, b, c:");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	if(a > b)
	{   // a��b��С�ķŵ� a�� 
		t = a; a = b;b = t;
	}
	if(b > c)
	{	//  b��b��С�ķŵ� b��
		t = c; c = b;b = t;
	}
	if(a > b)
	{	// �»�������b��a˭��С���ŵ�a�� 
		t = a; a = b;b = t;
	}
	
	printf("a = %d, b = %d, c = %d", a, b, c);	
 } 
