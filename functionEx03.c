// ���ް��� �ִ� �Լ�
#include <stdio.h>
void function_with_params(int num1, int num2, int num3);    // �Լ� ����

int main(void) {
    function_with_params(1, 2, 3);  // ���ް��� �ִ� �Լ� ȣ��
    return 0;
}

void function_with_params(int num1, int num2, int num3) {   // �Լ� ����
    printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
}
