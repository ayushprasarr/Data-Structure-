// Name: Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 5
// Program: Power using Stack

#include <stdio.h>

int stack[100];
int top = -1;

void push(int n)
{
    top++;
    stack[top] = n;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int base, power, i, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    for(i = 1; i <= power; i++)
        push(base);

    while(top != -1)
        result = result * pop();

    printf("Answer = %d", result);

    return 0;
}
