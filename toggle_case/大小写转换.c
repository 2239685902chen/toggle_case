#include<stdio.h>
int main()
{
	int q = 0;
	while ((q = getchar()) != EOF)//��һ���������Ctrl+z�Ϳ���ֹͣѭ��
	{//�������ַ���Ļس���Ҳ�ᱻgetchar��ȡ��
		getchar();//��һ�������������������������ַ��������Ļس���
		putchar(q + 32);//��Сд��ASCII��ֵ���32����д��ĸ��ASCII��ֵ��Сд��ASCIIֵС��
		printf("\n");
	}
	return 0;
}