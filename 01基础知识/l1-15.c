#include <stdio.h>
/* ʹ�ö��ű��ʽ  */
void main()
{
	int a=0, b=0, x=0, y=0;
	
	a=(x=8, x%5);
	b=x=8, x%5;
	printf("%d, %d, %d \n", a, b, (y=2, y*3));
}
