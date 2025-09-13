#include <stdio.h>
#include <ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char ch) {
    if (ch == '^') return 3;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '+' || ch == '-') return 1;
    return 0;
}

void infixToPostfix(char* exp) {
    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];
        if (isalnum(ch)) {
            printf("%c", ch);
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (top != -1 && peek() != '(')
                printf("%c", pop());
            pop(); // remove '('
        } else {
            while (top != -1 && precedence(peek()) >= precedence(ch))
                printf("%c", pop());
            push(ch);
        }
    }
    while (top != -1)
        printf("%c", pop());
    printf("\n");
}

int main() {
    char exp[] = "A+B*C-D";
    printf("Infix Expression : %s\nPostfix Expression : ", exp);
    infixToPostfix(exp);
    return 0;
}