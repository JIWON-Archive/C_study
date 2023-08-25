#include <stdio.h>
int main(void) {
    // 문자
    char c = 'A';
    printf("%c\n", c);
    // 문자열 보통 값에 여러 문자가 한 번에 들어가기 때문에 일반 변수가 아닌 배열을 사용
    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);
    return 0;
}