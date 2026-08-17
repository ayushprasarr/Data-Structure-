#include<stdio.h>

void main()
{
    int a[10],i,n;

    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Array:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\nEnter number to search: ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("Found");
            break;
        }
    }
}
