// 반환값이 있는 함수
#include <stdio.h>

void p(int num);
int function_with_return();     // 함수 선언

int main(void) {
    int ret;    // 반환값을 받을 변수 선언
    ret = function_with_return();   // 반환값이 있는 함수 호출
    printf("%d\n", ret);
    p(ret);     // 함수 호출 -> ret 변수를 p() 함수의 매개변수로 전달
    return 0;
}

int function_with_return() {    // 함수 정의
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void p(int num) {
    printf("num은 %d입니다.\n", num);
}