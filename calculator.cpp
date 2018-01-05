#include "header.h"

typedef struct Stack {
    unsigned int *top, *bottom;
} ST;

void InitStack(struct Stack *stack) {
    stack->bottom = stack->top;

    int d = 0;

    printf("sizeof(stack)%d\n", sizeof(stack));
    printf("sizeof(*stack)%d\n", sizeof(*stack));

    while (1) {
        scanf("%d", &d);
        if (d == 9) {
            break;
        }
        *(stack->top) = d;
        stack->top++;
    }

}

void Calculate(struct Stack *stack) {

    struct Stack temp;
    temp.top = temp.bottom;
    int result = 0, i = 0;

    int length = stack->top - stack->bottom;
    while (stack->top - stack->bottom > 0) {
        printf("%d ", *--stack->top);
        result += *(stack->top) * pow(2, i);
        i++;
    }
    printf("\n10 => %d\n",result);


    result = 0;
    i = 0;
    stack->top += length;
    while (stack->top - stack->bottom > 0) {
        if (i == 3) {
            printf("\n*8 => %d\n",result);
            *(temp.top) = result;
            temp.top++;
            i = 0;
            result = 0;
        }
        printf("*%d ", *--stack->top);
        result += *(stack->top) * pow(2, i);
        i++;
    }
    printf("\n*8 => %d\n",result);
    *(temp.top) = result;
    temp.top++;

    while (temp.top - temp.bottom > 0) {
        printf("%d ", *--temp.top);
    }
    printf("\n");

    temp.top = temp.bottom;
    result = 0;
    i = 0;
    stack->top += length;
    while (stack->top - stack->bottom > 0) {
        if (i == 4) {
            printf("\n*8 => %d\n",result);
            *(temp.top) = result;
            temp.top++;
            i = 0;
            result = 0;
        }
        printf("*%d ", *--stack->top);
        result += *(stack->top) * pow(2, i);
        i++;
    }
    printf("\n*8 => %d\n",result);
    *(temp.top) = result;
    temp.top++;

    while (temp.top - temp.bottom > 0) {
        printf("%d ", *--temp.top);
    }
}