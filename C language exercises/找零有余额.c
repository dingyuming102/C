#include <stdio.h>
int main()
{
	double price,bill;
	
	printf("请输入金额（元）："); 
	scanf("%lf",&price);
	printf("请输入票面（元）：");
	scanf("%lf",&bill);
	
	if (bill>price){
		double change=bill-price;
		printf("找您%f元",change);
	} 
	else {
		printf("余额不足"); 
	}
}
