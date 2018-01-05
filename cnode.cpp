#include "header.h"

typedef struct Cnode {
    unsigned int data;
    struct Cnode *Next;
};

void InitCnode(struct Cnode *cnode) {
    cnode = (struct Cnode) malloc(sizeof(struct Cnode));
    (*cnode)->Next = null;
}

int GetElem(struct Cnode node, int key) {
    struct Cnode *temp;
    (*temp) = node.Next;

    int index = 0;
    for (int i = 0; i < key; ++i, ++index) {
        (*temp) = (*temp)->Next;
        //(*temp) = (temp).Next;与上面效果相同
    }

    if (!(*temp) || index > key) {
        return ERR;
    }

    return (*temp).data;
}

int ListInsert(struct Cnode *node, int key, unsigned int elem) {
    struct Cnode *temp, *newNode;
    (*temp) = node.Next;

    int index = 0;
    for (int i = 0; i < key; ++i, ++index) {
        (*temp) = (*temp)->Next;
        //(*temp) = (temp).Next;与上面效果相同
    }

    if (!(*temp) || index > key) {
        return ERR;
    }

    newNode = (struct Cnode) malloc(sizeof(struct Cnode));
    (*newNode)->Next = (*temp).Next;
    (*newNode)->data = elem;
    (*temp).Next = *newNode;
    return TRUE;
}

int ListDelete(struct Cnode *node, int key, unsigned int *elem) {
    struct Cnode *temp;
    (*temp) = node.Next;

    int index = 0;
    for (int i = 0; i < key-1; ++i, ++index) {
        (*temp) = (*temp)->Next;
        //(*temp) = (temp).Next;与上面效果相同
    }

    if (!(*temp) || index > key-1) {
        return ERR;
    }

    *elem = (*temp)->Next->data;
    free((*temp)->Next);
    (*temp) = (*temp)->Next->Next;
    return TRUE;
}

void CreateCnodeHead(struct Cnode *node, unsigned int val[10]) {
    struct Cnode *temp;

    for (int i = 0; i < 10; ++i) {
        temp = (struct Cnode) malloc(sizeof(struct Cnode));
        (*temp)->data = val[i];
        (*temp)->Next = (*node)->Next;
        (*node)->Next = *temp;
    }
}

void CreateCnodeTail(struct Cnode *node, unsigned int val[10]) {
    struct Cnode *temp, *end;

    (*end).Next = (*node).Next;

    for (int i = 0; i < 10; ++i) {
        *temp = (struct Cnode) malloc(sizeof(struct Cnode));
        (*temp)->data = val[i];
        (*end)->Next = *temp;
        *end = *temp;
    }
}
