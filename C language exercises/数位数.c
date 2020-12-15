#include <stdio.h>
int main()
{
	int a,n;
	printf("请输入自然数：\n"); 
	scanf("%d",&a);
	
	do
	{
		n++;
		a/=10;
	 } while(a>0);
	
	printf("位数是%d。\n",n); 
 } 
