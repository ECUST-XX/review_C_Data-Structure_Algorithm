#include "header.h"

typedef struct staticNode {
    unsigned int data;
    int Cursor;
} staticNodeList[MAXSIZE];

void InitStaticNode(staticNodeList sNode) {
    sNode[0].Cursor = 0;
    for (int i = 1; i <= MAXSIZE - 2; ++i) {
        sNode[i].Cursor = i + 1;
    }
    sNode[MAXSIZE - 1].Cursor = 0;
}

int StaticNodeInsert(staticNodeList sNode, int key, unsigned int elem) {

    struct staticNode temp, newNode;
    temp = sNode[MAXSIZE - 1];
    int i = 0;
    for (; i < key; ++i) {
        if (temp.Cursor != 0) {
            temp = sNode[temp.Cursor];
        } else {
            return ERR;
        }
    }

    newNode.data = elem;
    newNode.Cursor = temp.Cursor;
    sNode[sNode[0].Cursor] = newNode;

    sNode[0] = sNode[0].Cursor + 1;
    temp.Cursor = key;

    return TRUE;
}

int StaticNodeDelete(staticNodeList sNode, int key, unsigned int *elem) {
    struct staticNode temp;
    temp = sNode[MAXSIZE - 1];
    for (int i = 0; i < key; ++i) {
        if (temp.Cursor != 0) {
            temp = sNode[temp.Cursor];
        } else {
            return ERR;
        }
    }
    *elem = sNode[temp.Cursor].data;
    sNode[0] = sNode[temp.Cursor].Cursor;
    temp.Cursor = sNode[sNode[temp.Cursor].Cursor].Cursor;
    return TRUE;
}

