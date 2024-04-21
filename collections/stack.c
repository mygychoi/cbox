#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#define SIZE 10

int nums[SIZE];
int top = -1;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int num);
int pop(void);

int main(void)
{
    make_empty();
    int num = 1;
    while (!is_full())
    {
        push(num);
        num++;
    }
    while (!is_empty())
    {
        num = pop();
        printf("%d", num);
    }
    pop();

    return 0;
}

void make_empty(void)
{
    top = -1;
}

bool is_empty(void)
{
    return top == -1;
}

bool is_full(void)
{
    return top == SIZE - 1;
}

void push(int num)
{
    assert(!is_full());
    top++;
    nums[top] = num;
}

int pop(void)
{
    assert(!is_empty());
    int popped = nums[top];
    top--;
    return popped;
}
