#include<stdio.h>

void main()
{
    int a[5],i,j,t;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("Descending Order:\n");

    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}