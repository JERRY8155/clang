#include <stdio.h> 

int main(void)
{

    int num1,num2,num3;
    float fnum1,fnum2;

    // printf("실수 ,정수, 실수 차례로 입력\n");
    // scanf_s("%f %d %f", &fnum1, &num1, &fnum2);
    // printf("실수 : %f\n정수 : %d\n실수 : %f\n", fnum1, num1, fnum2);

    // printf("세개의 정수 입력 : ");
    // scanf_s("%o %x %d", &num1, &num2, &num3);   // 10 10 10
    // printf("%d %d %d\n", num1, num2, num3);     // 8  16 10

    int octNum = 010;   // 8진수 10을 나타낸다
    int hexNum = 0xA;   // 16진수를 나타낸다

    printf("%o %x\n", octNum, hexNum);
    printf("%d %d\n", octNum, hexNum);

    return 0;
}