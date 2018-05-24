/* 添加于2016-10-12，测试c语言中是否也支持匿名联合 */
#include <stdio.h>
#include <string.h>

int main()
{
	struct widget
	{
		char brand[20];
		int type;
		union             
		{
			long id_num;  
			char id_char[20];  
		};
	};
	struct widget var;
	strcpy(var.id_char,"hehe");
	printf("var.id_num = %ld\n",var.id_num);

	return 0;
}
