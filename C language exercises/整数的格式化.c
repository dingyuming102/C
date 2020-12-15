#include <stdio.h>
int main(void)
{
	//%d:int	%u:unsigned		%ld:long long	%lu:unsigned long long;-1;
	char c=-1;
	int i=-1;
	printf("c=%u,i=%u\n",c,i);
	
	char a=012;
	int b=0x12;
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
}
 
