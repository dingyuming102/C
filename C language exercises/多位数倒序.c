#include <stdio.h>
int main()
{
	int x,digit;
	int ret=0;
	printf("请输入一个任意正整数：\n");
	scanf("%d",&x);
	
	printf("这个正整数的倒序是："); 
	
	while (x>0){
		digit=x%10;
		printf("%d",digit);
		x/=10;
		ret=ret*10+digit;
	}
	printf("\n这个正整数的倒序是：%d",ret);
	return 0;
}
