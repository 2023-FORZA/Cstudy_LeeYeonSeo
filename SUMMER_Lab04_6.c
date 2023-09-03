#include <stdio.h>
#include <stdbool.h>
#include <string.h>


#define MAX_SIZE 51 
typedef struct {
    char stack[MAX_SIZE];
    int top;
} Stack;


void initStack(Stack* s) {
    s->top = -1;
}


bool isEmpty(Stack* s) {
    return s->top == -1;
}


void push(Stack* s, char c) {
    s->stack[++(s->top)] = c;
}


char pop(Stack* s) {
    return s->stack[(s->top)--];
}


bool isValidParentheses(char* str) {
    Stack s;
    initStack(&s);
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (c == '(') {
            push(&s, c);
        }
        else if (c == ')') {
            if (isEmpty(&s)) {
                return false; 
            }
            else {
                pop(&s);
            }
        }
    }

    return isEmpty(&s); 
}

int main() {
    int n; 
    scanf("%d", &n);

    while (n--) {
        char str[MAX_SIZE];
        scanf("%s", str);

        if (isValidParentheses(str)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
