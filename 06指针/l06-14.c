/* ָ��Ͷ�ά���� */
#include <stdio.h>
void main()
{
	int i=0, j=0;
	int a[3][2] = {{1,2},{3,4},{5,6}};
	int (*p)[2];	// ����pΪ��ָ�룬ÿ��������Ԫ�� 
	p = a;		// ֻ��p�󷽵������е�ֵ������aÿ�е�Ԫ�ظ�����ͬ�źϷ�
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%5d", p[i][j]);
		}
		printf("\n");
	} 
	printf("%x, %x, %x\n", a, a+1, a+2);
	printf("%x, %x, %x\n", p, p+1, p+2);
}
