// 반환값과 전달값이 있는 함수
#include <stdio.h>
int apple(int total, int ate);  // 함수선언

int main() {
    int ret = apple(5, 2);
    printf("사과 5개 중에 2개를 먹으면 %d개가 남습니다.\n", ret);
    // 반환값을 따로 저장할 필요 없이 printf() 문에 함수 호출을 넣어 바로 반환값을 출력할 수 있습니다.
    printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4));
}

int apple(int total, int ate) {
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}