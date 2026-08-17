// Name: Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 4
// Program: Factorial using Stack

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
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        push(i);

    while(top != -1)
        fact = fact * pop();

    printf("Factorial = %d", fact);

    return 0;
}
