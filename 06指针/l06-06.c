/* ���庬��10��Ԫ�ص����飺��˳����������е�Ԫ��
 ������Ԫ���������в��洢�������ֻ������һ����ʱ��Ԫ�� */
#include <stdio.h>
void main() 
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0, t = 0;
	int *p = a, *q = NULL;
	for(i=0; i<10; i++) 
		printf("%4d", *(p+i));	// ָ�벻�ƶ� 
	printf("\n");
	q = a+9;
	while(p < q)
	{
		t = *p; *p = *q; *q = t;
		p++; q--;
	}	
	for(p=a; p<a+10; p++)
		printf("%4d", *p);
}
