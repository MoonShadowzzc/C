#include <stdio.h>
/* ����x��y��ֵ  */
void main()
{
	int x=3,y=5;
	int t = 0;
	
	printf("x=%d,y=%d\n", x ,y);
	t = x;
	x = y;
	y = t;
	printf("x=%d,y=%d\n", x ,y);
}
