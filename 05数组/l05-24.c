/* 
 ��ӡN*N�׵���������˳ʱ�뷽��������
  1  2  3  4 5
 16 17 18 19 6
 15 24 25 26 7
 14 23 22 21 8
 13 12 11 10 9
*/
#include <stdio.h>
#define N 10
void main()
{
	int cl = 0, i = 0, j = 0, u = 0, d = 0, l = 0, r = 0;
	int k = 1;
	int a[N][N] = {0};
	// �������������Ȧ�� 
	if(N%2 == 0) cl = N/2;
	else cl = N/2+1;
	
	for(i=0; i<cl; i++)
	{
		// u-�ϲำֵ
		for(u=i; u<N-i; u++) 
		{
			a[i][u] = k++;
		}
		// r-�Ҳำֵ 
		for(r=i+1; r<N-i; r++)
		{
			a[r][N-1-i] = k++;
		}
		// d-�²ḳֵ
		for(d=N-2-i; d>i-1; d--)
		{
			a[N-1-i][d] = k++;
		} 
		// l-��ำֵ
		for(l=N-2-i; l>i; l--)
		{
			a[l][i] = k++;
		} 		
	} 
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
} 
