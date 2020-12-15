#include <stdio.h>
int main()
{
	double x;
	double f;
	
	printf("请输入自变量x的值：");
	scanf("%lf",&x);
	
	if (x<0)
	{
		f=-1;
	}
	else if (x==0)
	{
		f=0;
	}
	else
	{
		f=3*x;
	}
	printf("f(x)=%f\n",f);
}
