#include <stdio.h>

/* ǿ������ת��  ǿ��ת������ʱ��ת��
                 ����ı������ֵ*/
void main()
{
	int i=0, j=0, k=0;
	float x=5.8, y=3.7, f=8.56;
	
	i= (int)(x + y);
	j= (int)x + y;
	k= (int)f % 3;
	
	printf("i=%d, j=%d, k=%d, x=%f\n", i, j, k, x);
} 
