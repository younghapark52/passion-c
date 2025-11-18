#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 3;
	num = num << 3; // 8ÀÇ °ö
	num = num >> 2; // 4ÀÇ Á¦
	printf("%d \n", num);
	return 0;
}
