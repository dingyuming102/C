#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int getint(int *pn)
{
	int c,sign;
	
	while(isspace(c=getch()))
		;
	if(!isdigit(c) && c!=EOF && c!='+' && c!='-'){
		ungetch(c);
		return 0;
	}
	sign=(c=='-')?-1:1;
	if(c=='+' || c=='-')
		c=getch();
	
	for(*pn=0;isdigit(c);c=getch())
		*pn=10**pn+(c-'0');
	*pn *= sign;
	if(c!=EOF)
		ungetch(c);
	
	return c;
}
int main()
{
	int n,array[100];
	for(n=0;n<100;n++)
		array[n]=0;

	for(n=0;n<100 && getint(&array[n])!=EOF;n++)
		;

	for(n=0;n<100;n++)
		printf("%d\n",array[n]);
		
	
}
