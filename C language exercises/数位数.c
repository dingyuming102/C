#include <stdio.h>
int main()
{
	int a,n;
	printf("��������Ȼ����\n"); 
	scanf("%d",&a);
	
	do
	{
		n++;
		a/=10;
	 } while(a>0);
	
	printf("λ����%d��\n",n); 
 } 
