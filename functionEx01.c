#include <stdio.h>
// 반환값이 없는 함수
void function_without_return(); // 함수 선언
// 전달값이 없는 함수
void function_without_params(); // 함수 선언

int main(void) {
    function_without_return(); // 반환값이 없는 함수 호출
    function_without_params(); // 전달값이 없는 함수 호출
    return 0;
}

void function_without_return() {
    printf("반환값이 없는 함수입니다.\n");
}

void function_without_params() {
    printf("전달값이 없는 함수입니다.\n");
}

