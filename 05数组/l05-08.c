/* ����10���������������У�ɾ��������С�ģ������ʣ���9������ */
#include <stdio.h>
void main()
{
	int i = 0;
	int k = 0;
	int a[10];
	
	printf("Input 10 numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%d : ", i+1);
		scanf("%d", &a[i]);
	}
	printf("before: ");
	for(i=0; i<10; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	// �ҳ���С�������±� 
	for(i=1; i<10; i++)
	{
		if(a[i] < a[k])	k = i;
	} 
	// ɾ����Сֵ����������Ǩ�� 
	for(i=k; i<9; i++)
	{
		a[i] = a[i+1];
	}
	printf("after : ");
	for(i=0; i<9; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
}
