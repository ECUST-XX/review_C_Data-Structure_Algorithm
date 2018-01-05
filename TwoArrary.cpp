#include "header.h"


void Two() {
    int two[8][8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            two[i][j] = (j + 1) * 10 + i + 4;
        }
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("%d ", two[i][j]);
        }
        printf("\n");
    }

    printf("two = %d\n", two);
    printf("*two = %d\n", *two);
    printf("*((two[5])+3) = %d\n", *((two[5]) + 3));
    printf("(two[5])[5] = %d\n", (two[5])[5]);
    printf("**(two+2) = %d\n", **(two + 2));
    // 一般形式 二维数组指针
    printf("*(*(two+2)+4) = %d\n", *(*(two + 2) + 4));
    printf("*(*(two)+4) = %d\n", *(*(two) + 4));

    printf("**two+20 = %d\n", **two + 20);
}
