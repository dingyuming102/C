#include <stdio.h>
int main()
{

	int x;
	scanf("%ld",&x);

	int mask=1;
	int t=x;
	
	while (t>9) {
		t/=10;
		mask*=10;
		
	}
	printf("x=%d,mask=%d\n",x,mask);
	//int mask=pow(10,cnt-1);
	
	
	do {
		int d=x/mask;
		printf("%d",d);
		if (mask>9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
		//printf("x=%d,mask=%d,d=%d\n",x,mask,d);
	} while (mask>0);
	
	printf("\n");
	
	return 0;
 } 
