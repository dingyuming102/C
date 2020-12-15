#include <stdio.h>
int main(void)
{
	printf("请分别输入身高的英尺和英寸，"
		"如输入\"5 7\"表示5英尺7英寸：");
	printf("请分别输入身高的英尺和英寸，\
如输入\"5 7\"表示5英尺7英寸：\n");

	char word[8];
	char word2[8];
	scanf("%7s",word);
	scanf("%7s",word2);	//%s读入一个单词（到空格、tab或回车为止） 
	printf("%7s##%s##\n",word,word2);	//空格是区分这一个单词和那一个单词的，它是一个分隔符 
	
	return 0;
}
