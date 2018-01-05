#include "header.h"

typedef struct BitTree {
    char data;
    struct BitTree *left, *right;
} BitTree, *Bit;

void GetDataLevel(char data, int level);

// 根结点法 二维指针(动态指针)
//void InitBitTree(Bit *bitTree);

//void PreTree(Bit *bitTree, int level);

//void InitBitTree(Bit *bitTree) {
//    char d;
//    scanf("%c", &d);
//    if (d != 'a') {
//        *bitTree = (BitTree *) malloc((sizeof(BitTree)));
//        (*bitTree)->data = d;
//        printf("+++%c+++\n", (*bitTree)->data);
//        InitBitTree((&(*bitTree)->left));
//        InitBitTree((&(*bitTree)->right));
//    } else {
//        printf("+++end+++\n");
//        *bitTree = NULL;
//    }
//}

//void PreTree(Bit *bitTree, int level) {
//    if (*bitTree != NULL) {
//        GetDataLevel((*bitTree)->data, level);
//        PreTree(&(*bitTree)->left, level + 1);
//        PreTree(&(*bitTree)->right, level + 1);
//    }
//}

// 子节点法
void InitBitTree(struct BitTree *bitTree);

void PreTree(BitTree *bitTree, int level);

void InitBitTree(struct BitTree *bitTree) {

    char d;
    scanf("%c", &d);
    if (d != 'a') {
        bitTree->left = (struct BitTree *) malloc((sizeof(struct BitTree)));
        bitTree->right = (struct BitTree *) malloc((sizeof(struct BitTree)));

        bitTree->data = d;

        InitBitTree((bitTree->left));
        InitBitTree((bitTree->right));
    } else {
        bitTree->left = NULL;
        bitTree->right = NULL;
    }

}

void PreTree(BitTree *bitTree, int level) {
    if (bitTree->left || bitTree->right) {
        GetDataLevel(bitTree->data, level);
        if (bitTree->left != NULL) {
            PreTree(bitTree->left, level + 1);
        }
        if (bitTree->right != NULL) {
            PreTree(bitTree->right, level + 1);
        }
    }
}

void GetDataLevel(char data, int level) {
    printf("%c  ---  %d\n", data, level);
}
