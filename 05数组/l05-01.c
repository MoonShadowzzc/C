/* һά����Ķ�������� */
#include <stdio.h>
#define N 10		// �������� 

void main()
{
	int i, a[3];	// �������i,����a 
	double b[N];	// ��������b 
	
	a[0] = 2; 
	a[1] = 4; 
	a[2] = a[0] + a[1];	// ������a��ֵ
	
	for(i=0; i<N; i++)
	{
		printf("Input b[%d]:", i);
		scanf("%lf",&b[i]);	// ¼��b��ÿһ��ֵ 
	} 
	printf("%d, %d, %d\n", a[0], a[1], a[2]); 
	for(i=0; i<N; i++)
	{
		printf("%.0lf,", b[i]);
	}
	printf("\n");	
} 
