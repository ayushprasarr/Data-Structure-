#include<stdio.h>

void main()
{
    int a[10],i,sum=0;
    float avg;

    printf("Enter 10 numbers:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    avg=sum/10.0;

    printf("Sum = %d",sum);
    printf("\nAverage = %.2f",avg);
}