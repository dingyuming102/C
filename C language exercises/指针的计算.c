#include <stdio.h>

int main(void)
{
	char ac[]= {0,1,2,3,4,5,6,7,8,9,-1,};
	char *p=ac;
	char *p1=ac[5];

	int i;
	for ( i=0; i<sizeof(ac)/sizeof(ac[0]); i++ ) {
		printf("%d\n",ac[i]);

	}
	//for (p=ac;*p!=-1;) {
	while ( *p != -1) {
		printf("%d\n", *p++);
	}
	
	
	
	
	
	printf("p=%p\n", p);
	printf("p+1=%p\n", p+1);
	printf("*(p+1)=%d\n)", *(p+1) );
	printf("p1-p=%d\n", p1-p);

	int ai[]= {0,1,2,3,4,5,6,7,8,9,};
	int *q=ai;
	int *q1=ai[5];
	
	printf("q=%p\n", q);
	printf("q+1=%p\n", q+1);
	printf("*(q+1)=%d\n)", *(q+1) );
	printf("q1-q=%d\n", q1-q);
	
	return 0;
 } 
