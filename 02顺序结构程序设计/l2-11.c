/* ��дһ��ʹ���ַ����뺯��getch��getche�ĳ��� */
#include <stdio.h>
void main()
{
	char ch = '\0';
	ch = getche();	// �û������ַ���ʾ����Ļ�ϣ����ǲ����û�����س��ͼ�������
	putchar(ch);
	ch = getch();	// �û������ַ�����ʾ����Ļ�ϣ����Ҳ����û�����س��ͼ�������
	putchar(ch);
	putchar('\n');
}
