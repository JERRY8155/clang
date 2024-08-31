/*

c언어 기본 자료형 종류
    -문자
        char        1byte   -128 ~ 127
    -정수
        short       2byte   -32768 ~ 32767
        int         4byte   -2,147,483,648 ~ 2,147,483,648
        loge
        loge loge
    -실수
        float       소수점 6~9자리(float 자료형은 숫자 뒤에 f를 붙임)
        double      소숨점 14 - 17 자리
        loge double 소수점 double 이상 

    sizeof 연산자
        자료형 크기를 계산해서 정수값으로 반환해준다.

*/

#include <stdio.h>

int main(void)
{
    char ch1 = 66,ch2 = 'B';
    short sh1 = 67;

    printf("%c\n", ch1);
    printf("%c\n", ch2);
    printf("%c\n", sh1);

    int in1 = 68;
    printf("%c\n");

    float f = 3.14;
    printf("%f\n",f);

    printf("size(100) : %d\n", sizeof(100));
    printf("size(3.14) : %d\n", sizeof(3.14));
    return 0;

}







