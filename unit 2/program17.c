// Name: Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 7
// Program: Smallest Common Divisor using Stack

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
    int n, i, divisor;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            push(i);
        }
    }

    divisor = stack[0];

    printf("Smallest Common Divisor = %d", divisor);

    return 0;
}
