#include <stdio.h>
int main()
{
	double price,bill;
	
	printf("�������Ԫ����"); 
	scanf("%lf",&price);
	printf("������Ʊ�棨Ԫ����");
	scanf("%lf",&bill);
	
	if (bill>price){
		double change=bill-price;
		printf("����%fԪ",change);
	} 
	else {
		printf("����"); 
	}
}
