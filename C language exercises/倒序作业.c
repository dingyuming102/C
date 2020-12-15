#include <stdio.h>
int main()
{
	int t=0;
	printf("请输入一个三位数（如123）：");
	scanf("%d",&t);
	int a=t/100;
	int b=t%100/10;
	int c=t%10;
	printf("%d",c*100+b*10+a);
}
