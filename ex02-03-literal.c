/*

리터널(Literal)
    값이 그 자체로 고정된 상수를 의미

    예)
    정수형 상수 : 10. -10
    실수형 상수 : 2.2, 3.14, -5.1
    문자형 상수 : 'A', 'B', 'C'

심볼릭 상수(const)
    상수의 이름에 붙여준것
    초기 값을 저장하면 변경이 불가
    프로그램 흐름에 따라 컴파일됨.

매크로 상수
    심볼릭 상수 일종
    컴파일시 가장먼저 매크로 상수 처리

*/


#include <stdio.h>
#define LENGTH 10       // 매크로 상수

int main(void)
{
    printf("LENGTH : %d\n",LENGTH);

    int number = 3;         // 일반 변수
    const int NUMBER = 5;   // 심볼릭 상수
    number = 10;            // 일반 변수는 값 변경 가능
    
    
    return 0;
}




