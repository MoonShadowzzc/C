/* ����10��ѧ���ĳɼ���������ƽ���ɼ���
   ��ͳ�Ʋ�����ƽ���ֵ�ѧ����������    */
#include <stdio.h>
void main()
{
	int i = 0;
	int count = 0;
	double total = 0.0;
	double a[10];
	double avg = 0.0;
	
	printf("Input Scores:\n");
	for(i=0; i<10; i++)
	{
		printf("�� %d λͬѧ:", i+1);
		scanf("%lf", &a[i]);
		total += a[i]; 
	}
	avg = total/10;
	
	for(i=0; i<10; i++)
	{
		if(a[i] >= avg)
		{
			count++;
		}
	}
	printf("avg = %.2lf, count = %d", avg, count);	
}
