#include <stdio.h>
int main()
{
	int a[][5]={{0,1,2,3,4},{2,3,4,5,6},};
	int i,j;
	
	for (i=0;i<2;i++){
		for (j=0;j<5;j++){
			a[i][j]=i*j;
		}
	}
}
