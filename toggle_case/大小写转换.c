#include<stdio.h>
int main()
{
	int q = 0;
	while ((q = getchar()) != EOF)//这一语句是输入Ctrl+z就可以停止循环
	{//输入完字符后的回车键也会被getchar读取。
		getchar();//这一语句的作用是用来吸收输入完字符后所按的回车键
		putchar(q + 32);//大小写的ASCII码值相差32，大写字母的ASCII码值比小写的ASCII值小。
		printf("\n");
	}
	return 0;
}