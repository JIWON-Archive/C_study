#include <stdio.h>
void p(int num);    // �Լ� ����

int main(void) {    
    int num = 2;
    p(num);         // �Լ� ȣ��
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

void p (int num) {  // �Լ� ����
    printf("num�� %d�Դϴ�.\n", num);
}