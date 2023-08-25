#include <stdio.h>
int main(void) {
    int a = 1;
    int b = 2;
    int c = 3;
    // 변수명 앞에 &를 붙여 출력하면 변수의 주소를 알 수 있다.
    //  변수의 주소를 출력하는 방법 :  포인터를 의미하는 %p를 사용
    printf("a의 주소 : %p, 암호 : %d\n", &a, a);
    printf("b의 주소 : %p, 암호 : %d\n", &b, b);
    printf("c의 주소 : %p, 암호 : %d\n", &c, c);
    int * cat;  // 포인터 변수 선언
    cat = &a;   // 포인터 변수에 a의 주소 저장
    printf("cat이 방문한 곳의 주소 : %p, 암호 : %d\n", cat, *cat);
    cat = &b;
    printf("cat이 방문한 곳의 주소 : %p, 암호 : %d\n", cat, *cat);
    cat = &c;
    printf("cat이 방문한 곳의 주소 : %p, 암호 : %d\n", cat, *cat);
    printf("cat의 마지막 방문한 곳의 주소 : %p, 암호 : %d\n", cat, *cat);
    // 포인터 변수로 값 바꾸기
    *cat = *cat*3;
    printf("cat가 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", cat, *cat);
    int * spy = cat;
    *spy = *spy-1;
    printf("spy가 방문한 곳의 주소 : %p, 암호 : %d\n", spy, *spy);
    return 0;
}