#include "header.h"

int countx = 1;

void EightQueen();

void InitTable(int table[8][8]);

void ShowTable(int table[8][8]);

int SetTable(int table[8][8], int row, int j);

int Danger(int table[8][8], int row, int j);

void EightQueen() {
    int table[8][8];

    InitTable(table);
    ShowTable(table);

    SetTable(table, 0, 8);

}

void InitTable(int table[8][8]) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            table[i][j] = 0;
        }
    }
}

void ShowTable(int table[8][8]) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    printf("----%d----\n", countx);
}

int SetTable(int table[8][8], int row, int j) {
    int table2[8][8];

    for (int l = 0; l < 8; ++l) {
        for (int k = 0; k < 8; ++k) {
            table2[l][k] = table[l][k];
        }
    }

    if (row == 8) {
        ShowTable(table2);
        countx++;
    } else {
        for (int k = 0; k < j; ++k) {
            if (Danger(table2, row, k) != -1) {

                for (int i = 0; i < 8; ++i) {
                    table2[row][i] = 0;
                }

                table2[row][k] = 1;
                SetTable(table2, row + 1, j);

            }
        }
    }

}

int Danger(int table[8][8], int row, int j) {

    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    for (int i = 0; i < 8; ++i) {
        if (table[i][j] != 0) {
            f1 = 1;
            break;
        }
    }
    for (int k = row, s = j; k >= 0 && s >= 0; --k, --s) {
        if (table[k][s] != 0) {
            f2 = 1;
            break;
        }
    }
    for (int k = row, s = j; k >= 0 && s < 8; --k, ++s) {
        if (table[k][s] != 0) {
            f3 = 1;
            break;
        }
    }
    for (int k = row, s = j; k < 8 && s >= 0; ++k, --s) {
        if (table[k][s] != 0) {
            f4 = 1;
            break;
        }
    }
    for (int k = row, s = j; k < 8 && s < 8; ++k, ++s) {
        if (table[k][s] != 0) {
            f5 = 1;
            break;
        }
    }

    if (f1 || f2 || f3 || f4 || f5) {
        return -1;
    } else {
        return 1;
    }

}
