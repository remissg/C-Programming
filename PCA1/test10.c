#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int val) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push more elements.\n\n");
        return;
    }
    stack[++top] = val;
    printf("Pushed %d onto the stack.\n", val);
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow! Cannot pop elements.\n\n");
        return -1;
    }
    int val = stack[top--];
    printf("Popped %d from the stack.\n", val);
    return val;
}

int evaluatePostfix(char* expression) {
    printf("\nEvaluating Postfix Expression...\n\n");
    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if (isdigit(ch)) {
            push(ch - '0');
        } else if (isspace(ch)) {
            continue;
        } else {
            int operand2 = pop();
            int operand1 = pop();

            printf("\nApplying operator '%c' on %d and %d\n\n", ch, operand1, operand2);

            switch (ch) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/':
                    if (operand2 == 0) {
                        printf("Error: Division by zero\n\n");
                        return 0;
                    }
                    push(operand1 / operand2);
                    break;
                default:
                    printf("Error: Invalid operator %c\n\n", ch);
                    return 0;
            }
        }
    }
    printf("\n");
    return pop();
}

int main() {
    char expression[] = "2 3 * 5 4 * + 9 -";
    printf("=== Postfix Expression Evaluation ===\n\n");
    printf("Postfix Expression: %s\n", expression);
    int result = evaluatePostfix(expression);
    printf("Final Result: %d\n", result);
    return 0;
}
