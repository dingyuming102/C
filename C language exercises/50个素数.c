#include <stdio.h>
int main()
{
	int x=2;
	int cnt=0;
	
	for (x=2;cnt<50;x++){
	//while (cnt<50){
		
		int i;
		int isprime=1;
		
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;
			}
		} 
		if(isprime==1){
			printf("%dÊÇËØÊı\n",x);
			cnt++;
		}
	//x++;
	}
} 
