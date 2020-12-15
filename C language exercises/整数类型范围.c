#include <stdio.h>
int main()
{
	unsigned char c = 255;	//	11111111
	int i = 255;	//	00000000 00000000 00000000 11111111
	c=c+1;
	printf("c=%d, i=%d\n",c,i);
	
	char a = 127;
	a=a+1;
	printf("a=%d",a);
	
	
	return 0;
 } 
