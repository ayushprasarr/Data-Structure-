#include<stdio.h>

void main()
{
    int a[10],i,pos;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&pos);

    for(i=pos-1;i<4;i++)
        a[i]=a[i+1];

    printf("Array:\n");

    for(i=0;i<4;i++)
        printf("%d ",a[i]);
}