#include <stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt;
	
	int number[100];	//	定义数组 
	
	scanf("%d",&x);
	
	for (cnt=0;x!=-1;cnt++) {
		number[cnt]=x;		//	对数组中元素赋值 
		// 
		{
			int i;
			printf("%d\t",cnt);
			for (i=0;i<=cnt;i++){
				printf("%d\t",number[i]);	
				
			}
			printf("\n");
		}
		//
		
		sum+=x;
		scanf("%d",&x);
	}
	
	if (cnt>0) {
		
		printf("%f\n",sum/cnt);
		
		int i;
		for (i=0;i<cnt;i++) {
			if (number[i]>sum/cnt) {
				printf("%d\n",number[i]);		//		使用数组中的元素 、遍历数组 
			}
		}
	}
	
	return 0;
	
 } 
