#include "header.h"

typedef struct LoopNode {
    unsigned int data;
    struct LoopNode *Next;
};

int InitLoopNode(struct LoopNode *head) {
    struct LoopNode *loopNode, *temp;
    (head)->data = 1;
    temp = head;
    for (int i = 2; i < 42; ++i) {
        loopNode = (struct LoopNode *) malloc(sizeof(struct LoopNode));
        temp->Next = loopNode;
        (loopNode)->data = i;
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
    printf("%d\n",temp->data);
}

int FindNode(struct LoopNode *head) {
    struct LoopNode *temp;
    int q = 1;
    while (head->Next->Next != head) {
        printf("%d\n",q);
        q++;
        for (int i = 1; i < 2; ++i) {
            head = head->Next;
        }

        printf("DEL  =  %d \n",head->Next->data);
        temp = head->Next;
        head->Next = temp->Next;
        head = temp->Next;
        printf("HEAD =  %d \n",head->data);

        printf("temp =  %d \n",temp->data);
        ShowLoopNode(head);
    }

    printf("**********\n");
    ShowLoopNode(head);
}
