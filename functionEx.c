#include <stdio.h>
void p(int num);    // 함수 선언

int main(void) {    
    int num = 2;
    p(num);         // 함수 호출
    num = num + 3;
    p(num);
    num = num - 1;
    p(num);
    num = num * 3;
    p(num);
    num = num / 6;
    p(num);

    return 0;
}

void p (int num) {  // 함수 정의
    printf("num은 %d입니다.\n", num);
}