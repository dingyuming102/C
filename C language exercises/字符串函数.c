#include <stdio.h>
#include <string.h>

size_t strlen (const char *s);								//����s���ַ������ȣ���������β��0���� 
int strcmp (const char *s1,const char *s2);					//�Ƚ������ַ��������أ�	-1:s1<s2	0:s1==s2	1:s1>s2 
char *strcpy(char *restrictdst, const char *restrictsrc);	//��src���ַ���������dst;restrict����src��dst���ص���C99��������dst,Ϊ��������������� 
char *strcat(char *testricts1, const char *restricts2);	//��s2������s1�ĺ��棬�ӳ�һ�������ַ���������s1��s1��������㹻�Ŀռ䣻���ӻ���һ�ֿ�����
//��ȫ���⣺���Ŀ�ĵ�û���㹻�Ŀռ䣿 

//��ȫ�汾 
int strncmp(const char *s1, const char *s2,size_t n);
char *strncpy(char *restrictdst, const char *restrictsrc,size_t n);	//��src���ַ���������dst;restrict����src��dst���ص���C99��������dst,Ϊ��������������� 
char *strncat(char *testricts1, const char *restricts2,size_t n);	//��s2������s1�ĺ��棬�ӳ�һ�������ַ���������s1��s1��������㹻�Ŀռ䣻���ӻ���һ�ֿ����� 

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);	//����NULL��ʾû���ҵ������Ѱ�ҵ�2���� 

int main(int argc, char const *argv[])
{
	//strlen strcmp strcpy strcat strchr strstr
	
	char line[]="Hello";
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	
	char s1[] ="abc";
	char s2[] ="abc ";
	//printf("%d\n",s1==s2)	��������һ����������ͬ�ĵ�ַ 
	printf("%d\n",strcmp(s1,s2));
	
	return 0;
 } 
