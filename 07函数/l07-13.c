/* ��ѡ�񷨽�10��������С�����˳��������� */
#include <stdio.h>
void myout(int a[], int n);
void mySort(int a[10], int n);
void main()
{
	int a[10] = {0,3,2,4,6,7,1,8,9,5};
	
	printf("Before:");
	myout(a,10);
	mySort(a,10);
	printf("After :");
	myout(a,10);
} 

void myout(int a[], int n)		// ע���βε���ʽ 
{
	int *p = NULL;
	for(p = a; p < a+n; p++)	// ���ʱָ���ƶ� 
	{
		printf("%4d,", *p);
	}
	printf("\n");
}

void mySort(int p[10], int n)
{
	int i=0, j=0, k=0, t=0;
	for(i=0; i<n-1; i++)
	{
		k = i;
		for(j = k + 1; j < n; j++)
			if(p[k] > p[j])	k = j;
		t = p[i]; p[i] = p[k]; p[k] = t;
	}
} 
