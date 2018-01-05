#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>





// 插入排序
#include "InsSort.cpp"

int main() {
    int r[10] = {-1,15,7,8,4,9,6,3,12,10};
    InsertSort(r,10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",r[i]);
    }
    printf("\n");
}

















// 骑士周游棋盘
//#include "horseOnTable.cpp"
//
//int main() {
//    InitHorseTable();
//}




// 二叉树
//#include "BitTree.cpp"
//
//int main() {
//    // 根结点法 二维指针(动态指针)
// //    Bit bitTree;
// //    InitBitTree(&bitTree);
// //    printf("  %c \n", (bitTree)->data);
// //    PreTree(&bitTree,1);
//
//    // 子节点法
//    struct BitTree bitTree;
//    InitBitTree(&bitTree);
//    PreTree(&bitTree,1);
//
//}




// KMP匹配
//#include "kmp.cpp"
//
//int main() {
//    InitKMP();
//}



// 二维数组指针问题
//#include "TwoArrary.cpp"
//
//int main() {
//    Two();
//}



// 八皇后
//#include "eightQueen.cpp"
//
//int main(){
//    EightQueen();
//}



// 计算器
//#include "calculator.cpp"
//
//int main(){
//    struct Stack stack;
//    InitStack(&stack);
//    Calculate(&stack);
//
//}



// 字母排序
//#include "alphabetically.cpp"
//
//int main() {
//    struct DoubleNode head, *result;
//    InitDoubleNode(&head);
//    ShowDoubleNode(&head);
//    result = ChangeHead(&head,-2);
//    ShowDoubleNode(result);
//
//}



// 魔术师发牌
//#include "magicianCards.cpp"
//
//int main(){
//    struct LoopNode head;
//    InitLoopNode(&head);
//    ShowLoopNode(&head);
//    SetCards(&head);
//    ShowLoopNode(&head);
//}




// 约瑟夫环
//#include "josephProblem.cpp"

//int main(){
//    struct LoopNode head;
//    InitLoopNode(&head);
//    ShowLoopNode(&head);
//    FindNode(&head);
//}


// 指针测试
//typedef struct stuff {
//    int age;
//    struct stuff *stu;
//};
//
//
//int main() {
//    struct stuff *Huqinwei;
//
//    Huqinwei = (struct stuff *)malloc(sizeof(struct stuff));
//
//    struct stuff ref;
// //    Huqinwei = &ref;
//    ref.age = 100;
//    printf("Huqinwei.age is %d\n", ref);
//    printf("ref.age is %d\n", (ref));
//    printf("Huqinwei.age is %d\n", (Huqinwei));
//    printf("Huqinwei.age is %d\n", (*Huqinwei));
//    printf("ref.age is %d\n", (&Huqinwei));
//
//    printf("Huqinwei.age is %d\n", (*Huqinwei).age);
//    printf("Huqinwei.age is %d\n", (Huqinwei)->age);

//    return 0;
//}







