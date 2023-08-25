// 전달값이 있는 함수
#include <stdio.h>
void function_with_params(int num1, int num2, int num3);    // 함수 선언

int main(void) {
    function_with_params(1, 2, 3);  // 전달값이 있는 함수 호출
    return 0;
}

void function_with_params(int num1, int num2, int num3) {   // 함수 정의
    printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d입니다.\n", num1, num2, num3);
}
