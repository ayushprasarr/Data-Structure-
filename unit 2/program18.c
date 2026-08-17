// Name:Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 8
// Program: Minimum and Maximum using Recursion

#include <stdio.h>

int min(int a[], int n)
{
    if(n == 1)
        return a[0];

    int m = min(a, n - 1);

    if(a[n - 1] < m)
        return a[n - 1];

    return m;
}

int max(int a[], int n)
{
    if(n == 1)
        return a[0];

    int m = max(a, n - 1);

    if(a[n - 1] > m)
        return a[n - 1];

    return m;
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Minimum = %d\n", min(a, n));
    printf("Maximum = %d", max(a, n));

    return 0;
}
