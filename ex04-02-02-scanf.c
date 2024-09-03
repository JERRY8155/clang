#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    float fnum, fnum2;

    printf("세개의 정수 입력\n");

    scanf_s("%d %d %d", &num1, &num2, &num3);
    printf("입력된 정수들 : %d %d %d\n", num1, num2, num3);
}