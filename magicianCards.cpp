#include "header.h"

typedef struct LoopNode {
    unsigned int data;
    struct LoopNode *Next;
};

void InitLoopNode(struct LoopNode *head) {
    struct LoopNode *loopNode, *temp;
    (head)->data = 0;
    temp = head;
    for (int i = 2; i < 14; ++i) {
        loopNode = (struct LoopNode *) malloc(sizeof(struct LoopNode));
        temp->Next = loopNode;
        (loopNode)->data = 0;
        temp = loopNode;
    }
    temp->Next = head;
}

void ShowLoopNode(struct LoopNode *head) {
    struct LoopNode *temp;
    temp = head;

    while (temp->Next != head) {
        printf("%d->", temp->data);
        temp = temp->Next;
    }
    printf("%d\n", temp->data);
}

void SetCards(struct LoopNode *head) {
    struct LoopNode *temp;
    temp = head;
    int count = 1;
    while (count <= 13){
        for (int i = 1; i <= count;++i) {
            if (temp->data == 0) {
                if (i == count) {
                    temp->data = count;
                    temp = temp->Next;
                    break;
                }
            } else {
//                temp = temp->Next;
                --i;
            }
            temp = temp->Next;
        }
        printf("----------\n");
        ShowLoopNode(head);
        count++;
    }
}