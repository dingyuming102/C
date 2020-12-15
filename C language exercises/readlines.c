#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);
void qqsort_(char *lineptr[],int left,int right);

int getline(char s[],int lim)
{
	int c,i;
	
	for(i=0;--lim>0 && (c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	
	return i;
}






#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp=allocbuf;
char *alloc(int n)
{
	if(allocbuf+ALLOCSIZE-allocp>=n){
		allocp+=n;
		return allocp-n;
	}else
		return 0;
}






int strcmp1(char *s,char*t)
{
	int i;
	for(i=0;s[i]==t[i];i++)
		if(s[i]=='\0')
			return 0;
	return s[i]-t[i];
}
int main()
{
	int nlines;
	
	if((nlines=readlines(lineptr,MAXLINES))>=0){
		qqsort_(lineptr,0,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}else{
		printf("error:input too big to sort\n");
		return 1;
	}
}
#define MAXLEN 1000
char *alloc(int);
int readlines(char *lineptr[],int maxlines)
{
	int len,nlines;
	char *p,line[MAXLEN];
	
	for(nlines=0;(len=getline(line,MAXLEN))>0;nlines++){
		if(nlines>=maxlines || (p=alloc(len))==0)
			return -1;
		else{ 
			line[len-1]='\0';
			strcpy(p,line);
			lineptr[nlines]=p;
		} 
	}
	return nlines;
}
void writelines(char *lineptr[],int nlines)
{
	int i;
	for(i=0;i<nlines;i++)
		printf("%s\n",lineptr[i]);
}
void swap(char* a[],int x,int y)
{
	char *b;
	
	b=a[x];
	a[x]=a[y];
	a[y]=b;
	
}

void qqsort_(char *v[],int left,int right)
{
	int i,last;
	
	if(left>=right)
		return;
	//swap(v,left,(left+right)/2);
	last=left;
	for(i=left+1;i<=right;i++)
		if(strcmp1(v[i],v[left])<0)
			swap(v,++last,i);
	swap(v,left,last);
	qqsort_(v,left,last-1);
	qqsort_(v,last+1,right);
	
}



