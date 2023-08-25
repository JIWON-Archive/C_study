#include <stdio.h>
int main(void) {
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;
    for(int i=0; i < 3; i++) {  // 0,1,2
        printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1, subway_array[i]);
    }
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}