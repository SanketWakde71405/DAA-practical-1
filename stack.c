#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 1000
void push();
int pop();
int peek();
bool isEmpty();
bool isFull();

int top = -1;
int stack[N]={0};
int main()
{
    printf("Static stack of capacity: %d\n", N);

    while (1)
    {
        printf("\nEnter 0:Exit\n1:Pushing Element into stack.\n2:Removing an element from the stack\n");
        printf("3: To see the topmmost element in a stack\n4: To check whether the stack is empty or not\n5:To check whether the stack is completely filled");
        int num;
        scanf("%d", &num);
        switch (num)
        {
        case 0:
            exit(0);
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;

        default:
            printf("Enter a correct option");
        }
    }

    return 0;
}

void push()
{
    if (top == N - 1)
    {
        printf("Stack is already full. Overflow state\n");
    }

    else
    {
        int number;

        printf("Enter the number you want to add into the stack\n");
        scanf("%d", &number);
        top += 1;
        stack[top] = number;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack already empty. Can't remove elements\n");
        return -1;
    }

    else
    {
        printf("Removing element...\n");
        int x = stack[top];
        top -= 1;
        printf("Element removed successfully");
        return x;
    }
}

int peek()
{
    int x = stack[top];
    printf("Topmost element of the stack is: %d\n",x);
    return x;
}

bool isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty.");
        return true;
    }

    else
    {
        return false;
    }
}

bool isFull()
{
    if (top == N - 1)
    {
        printf("Stack is completely filled. Overflow state");
        return true;
    }
    else
    {
        printf("Stack is not full.");
        return false;
    }
};