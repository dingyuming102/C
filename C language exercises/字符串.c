#include <stdio.h>
int main(void)
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬"
		"������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬\
������\"5 7\"��ʾ5Ӣ��7Ӣ�磺\n");

	char word[8];
	char word2[8];
	scanf("%7s",word);
	scanf("%7s",word2);	//%s����һ�����ʣ����ո�tab��س�Ϊֹ�� 
	printf("%7s##%s##\n",word,word2);	//�ո���������һ�����ʺ���һ�����ʵģ�����һ���ָ��� 
	
	return 0;
}
