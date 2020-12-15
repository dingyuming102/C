#include <stdio.h>

int mintaken(int a[],int len);
int maxtaken(int a[],int len);

int main()
{
	int num,maxmark;
	scanf("%d %d",&num,&maxmark);
	int a[num];
	
	int i,sum,avg,cnt;
	for(i=0;i<num;i++)		
		scanf(" %d",&a[i]);
		
	struct removee {
		int num;
		int val;
	};
	
	struct removee min={-1,maxmark};
	struct removee max={-1,0};	
	for(i=1;i<num;i++){
		if(a[i]>=0 && a[i]<=maxmark){
			if (a[i] <= min.val) {
				min.num = i;
				min.val = a[i];
			}
			if (a[i] >= max.val) {
				max.num = i;
				max.val = a[i];
			}
		}
	}
		
	for(i=1,sum=0,cnt=0;i<num;i++){
		if(a[i]>=0 && a[i]<=maxmark && i!=min.num && i!=max.num){
			sum+=a[i];
			cnt++;
		}
	}
	
	avg=1.0*sum/cnt;
	avg=(avg+a[0])/2.0;
	
	printf("%d",avg);
	
	return 0;
}
