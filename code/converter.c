#include <stdio.h>
#include <stdlib.h>

int operand(char c) {
    // Returns 0 if c is an operator
    // Returns 1 if c is an operand (like a or c)
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int getValueForOperator(char op) {
    int val = 0;
    switch(op) {
        case '/':
            val = 4;
            break;
        case '*':
            val = 3;
            break;
        case '+':
            val = 2;
            break;
        case '-':
            val = 1;
            break;
        default:
            val = 0;
            break;
    }
    return val;
}

int higherPrecedence(char op1, char op2) {
    // Returns 1 if op1 has higher precedence. 0 otherwise
    int val1 = getValueForOperator(op1);
    int val2 = getValueForOperator(op2);
    return val1 > val2;
}

char* convertToPostfix(char* exp, int len) {
    char *result;
    result = malloc(len);
    int resultI; // Iterates over result

    result = "ab+";
    return result;
}

void printTest(int result) {
    if (result == 1) {
        printf("Test passed.\n");
    }
    else {
        printf("----- Test failed! ------\n");
    }
}

int testFns() {
    printTest(operand('a'));
    printTest(operand('8'));
    printTest(!operand('+'));
    printTest(higherPrecedence('*', '-'));
    printTest(!higherPrecedence('-', '-'));

    printTest(
        strcmp(convertToPostfix("a+b", 4), "ab+") == 0
    );
}

int main() {
    testFns();
    return 0;
}