#include <assert.h>
#include <stdlib.h>

typedef int (*operation)(int a, int b);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

operation ops[128] = {['+'] = add, ['-'] = sub, ['*'] = mul, ['/'] = divide};

int operate(char code, int a, int b) {
    operation op = ops[code];
    return op(a, b);
}

int main(void) {
    assert(operate('+', 1, 2) == 3);
    assert(operate('-', 1, 2) == -1);
    assert(operate('*', 2, 3) == 6);
    assert(operate('/', 4, 2) == 2);

    return EXIT_SUCCESS;
}
