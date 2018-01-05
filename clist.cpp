#include "header.h"

typedef struct List {
    unsigned int data[MAXSIZE];
    int last;
};

void InitList(struct List *list) {
    list->last = -1;
}

int Length(struct List list) {
    return list.last + 1;
}

int LocalElem(struct List list, unsigned int elem) {
    for (int i = 0; i < Length(list); ++i) {
        if (list.data[i] == elem) {
            return i;
        }
    }
    return ERR;
}

int GetElem(struct List list, int key) {
    if (key < 0 || key > list.last) {
        return ERR;
    }

    return list.data[key];
}

int ListInsert(struct List *list, int key, unsigned int elem) {
    if (key < 0 || key > list->last) {
        return ERR;
    }

    for (int i = list->last; i > key; --i) {
        list->data[i + 1] = list->data[i];
    }

    list->data[key] = elem;
    return TRUE;
}

int ListDelete(struct List *list, int key, unsigned int *elem) {
    if (key < 0 || key > list->last) {
        return ERR;
    }

    elem = &list->data[key];

    for (int i = key; i < list->last; ++i) {
        list->data[i] = list->data[i + 1];
    }

    return TRUE;
}

void PrintList(struct List list) {
    for (int i = 0; i < list.last; ++i) {
        printf("%d ", list.data[i]);
    }
    printf("%d", list.data[list.last]);
}

int IsEmpty(struct List list) {
    return list.last == -1 ? TRUE : FALSE;
}

void DestoeyList(struct List *list) {
    free(list);
}

