#include "header.h"

typedef struct DoubleNode{
    unsigned int data;
    struct DoubleNode *Next,*Prior;
}DoubleNode;

void InitDoubleNode(struct DoubleNode *head) {
    struct DoubleNode *temp,*node;
    temp = head;
    temp->data = 1;

    for (int i = 2; i <= 26; ++i) {
        node = (struct DoubleNode *)malloc(sizeof(struct DoubleNode));
        node->data = i;
        node->Prior = temp;
        temp->Next = node;
        temp = node;
    }

    temp->Next = head;
    head->Prior = temp;

}

void ShowDoubleNode(struct DoubleNode *head) {
    struct DoubleNode *temp;
    temp = head;

    while (temp->Next != head) {
        printf("%d->", temp->data);
        temp = temp->Next;
    }
    printf("%d\n", temp->data);

    temp = head->Prior;
    while (temp != head) {
        printf("%d<-", temp->data);
        temp = temp->Prior;
    }
    printf("%d\n", temp->data);
}

DoubleNode * ChangeHead(struct DoubleNode *head, int num) {
    struct DoubleNode *temp;
    temp = head;

    if (num>=0){
        for (int i = 1; i <= num; ++i) {
            printf("%d->", temp->data);
            temp = temp->Next;
        }
    } else {
        for (int i = -1; i >= num; --i) {
            printf("%d<-", temp->data);
            temp = temp->Prior;
        }
    }
    printf("%d\n", temp->data);
    return temp;
}