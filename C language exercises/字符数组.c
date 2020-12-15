#include <stdio.h>

#define MAXLINE 1000

int getline(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
	int max,len;
	int line[MAXLINE],longest[MAXLINE];
	
	max=0;
	while((len=getline(line,MAXLINE))>0) {
		if(len>max) {
			max=len;
			copy(longest,line);
		}
	}
	if(max>0)
		printf("%s",longest);
	
	return 0;
}

int getline(char s[],int lim)
{
	int i,c;
	
	for(i=0;c!=lim-1 && (c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n') {
		s[i]=c;
		i++;
	}
	s[i]='\0';
	
	return i;
}

void copy(char to[],char from[])
{
	int i;
	
	for(i=0;(to[i]=from[i])!='\0';i++)
		;
		
}
