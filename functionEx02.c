// ��ȯ���� �ִ� �Լ�
#include <stdio.h>

void p(int num);
int function_with_return();     // �Լ� ����

int main(void) {
    int ret;    // ��ȯ���� ���� ���� ����
    ret = function_with_return();   // ��ȯ���� �ִ� �Լ� ȣ��
    printf("%d\n", ret);
    p(ret);     // �Լ� ȣ�� -> ret ������ p() �Լ��� �Ű������� ����
    return 0;
}

int function_with_return() {    // �Լ� ����
    printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return 10;
}

void p(int num) {
    printf("num�� %d�Դϴ�.\n", num);
}