#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
float, double, long double의 데이터 출력에 사용되는 서식문자는 각각 %f, %f, %Lf이다.
float, double, long double의 데이터 입력에 사용되는 서식문자는 각각 %f, %lf, %Lf이다.
*/

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수: %f \n", num1);

	printf("실수 입력2(e 표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수: %f \n", num2);

	printf("실수 입력3(e 표기법으로): ");
	scanf("%Lf", &num3);
	printf("입력된 실수: %Lf \n", num3);
	return 0;
}
