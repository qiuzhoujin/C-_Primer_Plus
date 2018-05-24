// 添加于2016-10-3，用于测试数组相关
#include <stdio.h>

int main()
{
	int things[] = {1,2,3,4};
	int total[4] = {0};
	printf("sizeof things = %lu.\n",sizeof things);
	printf("total[1] = %d.\n",total[1]);

	return 0;
}
