#include <stdio.h>
int main(void)
{
	printf("sizeof(char)=%ld\n",sizeof(char));	//1字节（8比特bit） 
	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(int)=%ld\n",sizeof(int));	//int就是用来表达寄存器的 
	printf("sizeof(long)=%ld\n",sizeof(long));
	printf("sizeof(long long)=%ld\n",sizeof(long long));
	
	return 0;
 } 
