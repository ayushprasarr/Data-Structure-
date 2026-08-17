#include <stdio.h>

char stack[100];
int top = -1;

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];

    printf("Reverse string: ");

    while(top != -1)
        printf("%c", stack[top--]);

    return 0;
}
