#include <stdio.h>
int main()
{
	int x,digit;
	int ret=0;
	printf("������һ��������������\n");
	scanf("%d",&x);
	
	printf("����������ĵ����ǣ�"); 
	
	while (x>0){
		digit=x%10;
		printf("%d",digit);
		x/=10;
		ret=ret*10+digit;
	}
	printf("\n����������ĵ����ǣ�%d",ret);
	return 0;
}
