#include <stdio.h>
int main()
{
	double grade1;
	
	printf("������ٷ��Ƴɼ���");
	scanf("%lf",&grade1);

	int grade2=grade1/10;
	
	if (grade1>100)
	{
		printf("�ɼ��������\n");
	}
	else
	{	
		switch (grade2)
		{
			case 10:
			case 9:
				printf("A\n");
				break;
			case 8:
				printf("B\n");
				break;
			case 7:
				printf("C\n");
		    	break;
			case 6:
				printf("D\n");
				break;
			default:
				printf("E\n");
		    	break;
		}
	}
	
}
