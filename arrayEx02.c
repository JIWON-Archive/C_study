#include <stdio.h>
int main(void) {
    // 배열에 문자열을 저장할 때는 문자열의 끝을 알리는 널 문자가 들어갈 공간을
    char str[7] = "coding"; 
    printf("%s\n", str);
    printf("%d\n", sizeof(str));
    
    char str1[] = "coding";
    for(int i = 0; i < sizeof(str1); i++) {
        printf("%c\n", str1[i]);
    }   
    return 0;
}