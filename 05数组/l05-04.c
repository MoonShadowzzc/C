/* һά�����ʼ�� */
#include <stdio.h>
void main()
{
	int i = 0;
	int a[5] = {1,2,3,4,5};	// {1,2,3,4,5}
	int b[5] = {2,3,4};		// {2,3,4,0,0}
	int c[]  = {3,4,5,6,7};	// {3,4,5,6,7}
	int d[5] = {0};			// {0,0,0,0,0}
	int e[5];				// ֻ������û�г�ʼ�� 
	// int f[5] = {1,2,3,4,5,6,7,8};	// Խ�磬����
	
	for(i=0; i<5; i++) printf("%15d",a[i]);
	printf("\n"); 
	for(i=0; i<5; i++) printf("%15d",b[i]);
	printf("\n"); 
	for(i=0; i<5; i++) printf("%15d",c[i]);
	printf("\n"); 
	for(i=0; i<5; i++) printf("%15d",d[i]);
	printf("\n"); 
	for(i=0; i<5; i++) printf("%15d",e[i]);
	printf("\n"); 
}
