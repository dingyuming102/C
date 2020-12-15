#include <stdio.h>

int search(int key,int a[],int length);

int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32,};
	int x;
	int loc;
	
	printf("请输入一个数字：");
	scanf("%d",&x);
	
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	
	if (loc!=-1) {
		printf("%d在第%d个位置上\n",x,loc);
		
	} else {
		printf("%d不存在\n",x);
	}
	
	return 0;
} 

int search(int key,int a[],int length) {	//数组作为函数参数时，往往 必须再用另一个参数来传入数组的大小 eg.这里的length。没有length这里是无法做计算的 
	
	int i;
	int ret=-1;
	
	for (i=0;i<length;i++){
		if (a[i]==key) {
			ret=i+1;
			break;
		}
	}
	return ret;
}
