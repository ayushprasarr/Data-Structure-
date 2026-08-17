#include<stdio.h>

void main()
{
    int a[3],b[3],c[3],i;

    printf("Enter Array A:\n");
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);

    printf("Enter Array B:\n");
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);

    for(i=0;i<3;i++)
        c[i]=a[i]+b[i];

    printf("Array C:\n");

    for(i=0;i<3;i++)
        printf("%d ",c[i]);
}