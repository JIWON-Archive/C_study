#include <stdio.h>
int main(void) {
    char name[256];
    printf("이름이 뭐에요?");
    scanf("%s", name, sizeof(name));
    printf("%s\n", name);
    return 0;
}