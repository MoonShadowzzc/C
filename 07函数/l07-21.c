/* ��������main���� */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)	// main�������β�
{
	int i=0, k=1;			// k��1��ʼ  argv[0] =  
	char *temp = NULL;
	for(i=2; i<argc; i++)
		if(strcmp(argv[i],argv[k]) < 0)
				k = i;
	temp = argv[0]; argv[0] = argv[k]; argv[k] = temp;
	for(i=1; i<argc; i++)
		printf("argv[%d] -> %s\n", i, argv[i]);
} 
