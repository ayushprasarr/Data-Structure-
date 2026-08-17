// Name:Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 6
// Program: GCD using Stack

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
    int a, b, i, gcd;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            push(i);
    }

    gcd = pop();

    printf("GCD = %d", gcd);

    return 0;
}
