#include <stdio.h>
// ��ȯ���� ���� �Լ�
void function_without_return(); // �Լ� ����
// ���ް��� ���� �Լ�
void function_without_params(); // �Լ� ����

int main(void) {
    function_without_return(); // ��ȯ���� ���� �Լ� ȣ��
    function_without_params(); // ���ް��� ���� �Լ� ȣ��
    return 0;
}

void function_without_return() {
    printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

void function_without_params() {
    printf("���ް��� ���� �Լ��Դϴ�.\n");
}

