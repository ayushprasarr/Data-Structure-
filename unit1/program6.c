#include<stdio.h>

void main()
{
    int a[10],i,n,pos;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=5;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=n;

    printf("Array:\n");

    for(i=0;i<6;i++)
        printf("%d ",a[i]);
}