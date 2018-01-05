#include "header.h"

void GetNext(char *T, int *next);

void KMP(char *T, char *S, int *next);

int InitKMP();

int InitKMP() {
//    char T[10] = {9, 'a', 'b', 'a', 'b', 'a', 'a', 'a', 'b', 'a'};
    char T[5] = {4, 'b', 'b', 'b', 'a'};

    char S[10] = {9, 'b', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a'};

    for (int i = 0; i < 10; ++i) {
        printf("%c ", T[i]);
    }
    printf("\n");
    int next[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    GetNext(T, next);
    for (int i = 0; i < T[0]; ++i) {
        printf("%d ", next[i]);
    }
    printf("\n");
    KMP(T, S, next);
}

void KMP(char *T, char *S, int *next) {
    int i = 0, j = 0, flag = 0;
    while (i <= S[0] && j <= T[0]) {
        printf("++++++++++++i = %d j = %d\n", i, j);
        printf("-------------------------------S = %c T = %c\n", S[i], T[j]);
        if (j == 0 || T[j] == S[i]) {
            j++;
            i++;
        } else {
            j = next[j];
        }
    }
    printf("result = %d    i = %d j = %d\n", i - j + 1, i, j);
}

void GetNext(char *T, int *next) {

    int j = 0, i = 1, count = 0;
    next[1] = 0;
    while (i < T[0]) {
        printf("--------------count = %d\n", count);
        count++;
        for (int ix = 0; ix < T[0]; ++ix) {
            printf("%d ", next[ix]);
        }
        printf("\n");
        if (j == 0 || T[i] == T[j]) {
            printf("T[i] = %c\n", T[i]);
            printf("T[j] = %c\n", T[j]);
            i++;
            j++;
            if (T[i] != T[j]) {
                next[i] = j;
            } else {
                next[i] = next[j];
            }
        } else {
            printf("j = %d i = %d\n", j, i);
            j = next[j];
        }
    }
}
