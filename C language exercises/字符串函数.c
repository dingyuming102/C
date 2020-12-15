#include <stdio.h>
#include <string.h>

size_t strlen (const char *s);								//返回s的字符串长度（不包括结尾的0）； 
int strcmp (const char *s1,const char *s2);					//比较两个字符串，返回：	-1:s1<s2	0:s1==s2	1:s1>s2 
char *strcpy(char *restrictdst, const char *restrictsrc);	//把src的字符串拷贝到dst;restrict表明src和dst不重叠（C99）；返回dst,为了能链起代码来； 
char *strcat(char *testricts1, const char *restricts2);	//把s2拷贝到s1的后面，接成一个长的字符串；返回s1；s1必须具有足够的空间；连接还是一种拷贝；
//安全问题：如果目的地没有足够的空间？ 

//安全版本 
int strncmp(const char *s1, const char *s2,size_t n);
char *strncpy(char *restrictdst, const char *restrictsrc,size_t n);	//把src的字符串拷贝到dst;restrict表明src和dst不重叠（C99）；返回dst,为了能链起代码来； 
char *strncat(char *testricts1, const char *restricts2,size_t n);	//把s2拷贝到s1的后面，接成一个长的字符串；返回s1；s1必须具有足够的空间；连接还是一种拷贝； 

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);	//返回NULL表示没有找到；如何寻找第2个？ 

int main(int argc, char const *argv[])
{
	//strlen strcmp strcpy strcat strchr strstr
	
	char line[]="Hello";
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	
	char s1[] ="abc";
	char s2[] ="abc ";
	//printf("%d\n",s1==s2)	两个数组一定不会是相同的地址 
	printf("%d\n",strcmp(s1,s2));
	
	return 0;
 } 
