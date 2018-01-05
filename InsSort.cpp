#include "header.h"

void InsertSort(int r[], int length) {
    int j;
    for (int i = 2; i < length; ++i) {
        r[0] = r[i];
        j = i - 1;
        while (r[0] < r[j]) {
            r[j + 1] = r[j];
            j = j - 1;
        }
        r[j + 1] = r[0];
    }

}



