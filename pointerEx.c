#include <stdio.h>
int main(void) {
    int a = 1;
    int b = 2;
    int c = 3;
    // ������ �տ� &�� �ٿ� ����ϸ� ������ �ּҸ� �� �� �ִ�.
    //  ������ �ּҸ� ����ϴ� ��� :  �����͸� �ǹ��ϴ� %p�� ���
    printf("a�� �ּ� : %p, ��ȣ : %d\n", &a, a);
    printf("b�� �ּ� : %p, ��ȣ : %d\n", &b, b);
    printf("c�� �ּ� : %p, ��ȣ : %d\n", &c, c);
    int * cat;  // ������ ���� ����
    cat = &a;   // ������ ������ a�� �ּ� ����
    printf("cat�� �湮�� ���� �ּ� : %p, ��ȣ : %d\n", cat, *cat);
    cat = &b;
    printf("cat�� �湮�� ���� �ּ� : %p, ��ȣ : %d\n", cat, *cat);
    cat = &c;
    printf("cat�� �湮�� ���� �ּ� : %p, ��ȣ : %d\n", cat, *cat);
    printf("cat�� ������ �湮�� ���� �ּ� : %p, ��ȣ : %d\n", cat, *cat);
    // ������ ������ �� �ٲٱ�
    *cat = *cat*3;
    printf("cat�� ��ȣ�� �ٲ� ���� �ּ� : %p, ��ȣ : %d\n", cat, *cat);
    int * spy = cat;
    *spy = *spy-1;
    printf("spy�� �湮�� ���� �ּ� : %p, ��ȣ : %d\n", spy, *spy);
    return 0;
}