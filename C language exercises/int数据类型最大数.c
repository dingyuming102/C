#include <stdio.h>
int main()
{
	unsigned int a=0,b=0;
	
	while (++a>0)
		;
	printf("int数据类型最大的数是：%d\n",a-1);
	b++;
	
	while ((a=a/10)!=0)
	{
		b++;
	}
	printf("int数据类型最大的数的数位是：%d\n",b);
	return 0;
 } 
