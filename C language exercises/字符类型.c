#include <stdio.h>
int main()
{
	char c;
	char d;
	c=1;
	d='1';
	
	if ( c==d ) {
		printf("���\n"); 
	} else {
		printf("�����\n");
	}
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	
	char i;
	scanf("%c",&i);
	printf("i=%d\n",i);
	printf("i='%c'\n",i);
	
	//int x;
	
	//scanf("%d",&x);		//scanfֻ�ܴ���int,���ܴ���char 
	scanf("%d",&i);
	//i=x;
	
	printf("i=%d\n",i);
	printf("i='%c'\n",i);
	
	if (49 == '1') {
		printf("OK");
	}
	
	int x;
	char y;
	scanf("%d %c",&x,&y);
	printf("x=%d,y=%d,y='%c'\n",x,y,y);
	scanf("%d%c",&x,&y);
	printf("x=%d,y=%d,y='%c'\n",x,y,y);
	
	char m='A';
	m++;
	printf("%c\n",m);
	int n='Z'-'A';
	printf("%d\n",n);
	
	return 0;
}
