/* �Ӽ������������ַ��ֱ����ڱ���x��y�У�
   Ҫ��ͨ�����򽻻������е�ֵ�� */
#include <stdio.h>
void main()
{
	char x='\0',y='\0',t = '\0';
	printf("Input x, y (Type of char):\n");
	scanf("%c,%c",&x,&y);
	printf("x = %c, y = %c", x, y);
	
	t = x;
	x = y;
	y = t;
    printf("After switch:\n");
	printf("x = %c, y = %c", x, y);
}
