// ��ȯ���� ���ް��� �ִ� �Լ�
#include <stdio.h>
int apple(int total, int ate);  // �Լ�����

int main() {
    int ret = apple(5, 2);
    printf("��� 5�� �߿� 2���� ������ %d���� �����ϴ�.\n", ret);
    // ��ȯ���� ���� ������ �ʿ� ���� printf() ���� �Լ� ȣ���� �־� �ٷ� ��ȯ���� ����� �� �ֽ��ϴ�.
    printf("��� %d�� �߿��� %d���� ������ %d���� �����ϴ�.\n", 10, 4, apple(10, 4));
}

int apple(int total, int ate) {
    printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return total - ate;
}