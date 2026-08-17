// Name: Ayush Prasar
// Enroll No: 92500527132
// Unit: 2
// Program No: 9
// Program: Simple Queue

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert()
{
    int n;

    if(rear == MAX - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &n);

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = n;
    }
}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted = %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue: ");

        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}
