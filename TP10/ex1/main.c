#include <stdio.h>

#include "stackArray.h"
int main() {
    struct Stack* testStack;
    //1--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("1-Creates empty stack : \n");
    testStack=createEmptyStack();

    //2--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("2-Add : \n");
    bool valid;
    printf("    * test : 69 then 100\n");
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    printf("    * result : \n");
    printStack(testStack);

    //3--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("3-valeur on top : ");
    printf("%d\n",top(testStack,&valid));

    //4--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("4-valeur on top and pop : ");
    printf("%d\n",pop(testStack,&valid));
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 100, &valid);
    push(testStack, 69, &valid);

    push(testStack, 100, &valid);
    push(testStack, 69, &valid);
    push(testStack, 63636, &valid);
    push(testStack, 69, &valid);
    push(testStack, 99999, &valid);
    push(testStack, 00000, &valid);
    push(testStack, 11111, &valid);
    printf("%d\n",pop(testStack,&valid));

    //5--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("5-Size : ");
    printf("%d\n", stackSize(testStack));

    //6--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("6-Empty : ");
    bool result = isStackEmpty(testStack);
    if(result){
        printf("Yes\n");
    } else{
        printf("No\n");
    }

    //7--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("7-Print : \n");
    printStack(testStack);

    //8--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("8-Delete all : \n");
    deleteStack(&testStack);
    printStack(testStack);
    return 0;
}