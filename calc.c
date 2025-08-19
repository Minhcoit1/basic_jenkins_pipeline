#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int x = 10, y = 5;
    printf("Add: %d\n", add(x, y));
    printf("Sub: %d\n", sub(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Div: %d\n", divide(x, y));
    return 0;
}
