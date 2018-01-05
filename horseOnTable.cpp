#include "header.h"

int table[8][8], X, Y;
long int N;

int CanSet(int x, int y, int count);

void PrintTable();

int SetTable(int x, int y, int num);

void InitHorseTable();

void InitHorseTable() {
    clock_t start, finish;
    start = clock();

    N = 1;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            table[i][j] = 0;
        }
    }
// 4.613000-------82533486
//    SetTable(1, 1, 1);
// 0.234000-------3759888
    SetTable(2, 0, 1);

    finish = clock();
    printf("\n%f-------%d\n", (double) (finish - start) / CLOCKS_PER_SEC, N);
}


int SetTable(int x, int y, int num) {
    ++N;
    int all = 0;
    table[x][y] = num;

//    printf("--------%d-------\n",num);
//    PrintTable();

    if (num >= 64) {
        PrintTable();
        return 1;
    }

    for (int i = 0; i < 8; ++i, ++all) {
        if (CanSet(x, y, i) && SetTable(X, Y, num + 1)) {
//                SetTable(X, Y, num + 1);
            break;
        }
    }

//    printf("RESET*******%d\n",num);

    if (all == 8) {
        table[x][y] = 0;
        return 0;
    }
}

void PrintTable() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf(" %2d ", table[i][j]);
        }
        printf("\n");
    }
}

int CanSet(int x, int y, int count) {
    switch (count) {
        case 0:
            if (x - 2 >= 0 && y + 1 <= 7 && table[x - 2][y + 1] == 0) {
                X = x - 2;
                Y = y + 1;
                return 1;
            }
            break;
        case 1:
            if (x - 1 >= 0 && y + 2 <= 7 && table[x - 1][y + 2] == 0) {
                X = x - 1;
                Y = y + 2;
                return 1;
            }
            break;
        case 2:
            if (x + 2 <= 7 && y + 1 <= 7 && table[x + 2][y + 1] == 0) {
                X = x + 2;
                Y = y + 1;
                return 1;
            }
            break;
        case 3:
            if (x + 1 <= 7 && y + 2 <= 7 && table[x + 1][y + 2] == 0) {
                X = x + 1;
                Y = y + 2;
                return 1;
            }
            break;
        case 4:
            if (x - 2 >= 0 && y - 1 >= 0 && table[x - 2][y - 1] == 0) {
                X = x - 2;
                Y = y - 1;
                return 1;
            }
            break;
        case 5:
            if (x - 1 >= 0 && y - 2 >= 0 && table[x - 1][y - 2] == 0) {
                X = x - 1;
                Y = y - 2;
                return 1;
            }
            break;
        case 6:
            if (x + 2 <= 7 && y - 1 >= 0 && table[x + 2][y - 1] == 0) {
                X = x + 2;
                Y = y - 1;
                return 1;
            }
            break;
        case 7:
            if (x + 1 <= 7 && y - 2 >= 0 && table[x + 1][y - 2] == 0) {
                X = x + 1;
                Y = y - 2;
                return 1;
            }
            break;
        default:
            break;
    }

    return 0;
}