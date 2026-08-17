#include<stdio.h>

void main()
{
    int a[3],b[3],c[6],i;

    printf("Enter Array A:\n");
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);

    printf("Enter Array B:\n");
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);

    for(i=0;i<3;i++)
        c[i]=a[i];

    for(i=0;i<3;i++)
        c[i+3]=b[i];

    printf("Merged Array:\n");

    for(i=0;i<6;i++)
        printf("%d ",c[i]);
}