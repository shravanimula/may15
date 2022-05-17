#include<stdio.h>
int main()
{
	int i=1;
	char *p=&i;
	if(*p==1)
		printf("LITTLE ENDIAN\n");
	else
		printf("BIG ENDIAN\n");
}
