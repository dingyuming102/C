#include <stdio.h>
int strlen1(char *s)
{
	int n;
	for(n=0;*s!='\0';s++)
		n++;
	return n;
}
int strlen2(char *s)
{
	char *p=s;
	while(*p!='\0')
		p++;
	return p-s;
}
int main()
{
	int c;
	c=strlen2("123124141");
	
	printf("%d\n",c);
	printf("%d",sizeof(c));
}
