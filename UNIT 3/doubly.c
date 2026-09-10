#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

int main()
{
    int option;

    do
    {
        printf("\n\n***** MAIN MENU *****");
        printf("\n1. Create a list");
        printf("\n2. Display the list");
        printf("\n3. Add a node at beginning");
        printf("\n4. Add a node at end");
        printf("\n5. Add a node before a given node");
        printf("\n6. Add a node after a given node");
        printf("\n7. Delete a node from beginning");
        printf("\n8. Delete a node from end");
        printf("\n9. Delete a given node");
        printf("\n10. Exit");

        printf("\n\nEnter your option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                create_ll();
                printf("\nDoubly linked list created.");
                break;

            case 2:
                display();
                break;

            case 3:
                insert_beg();
                break;

            case 4:
                insert_end();
                break;

            case 5:
                insert_before();
                break;

            case 6:
                insert_after();
                break;

            case 7:
                delete_beg();
                break;

            case 8:
                delete_end();
                break;

            case 9:
                delete_node();
                break;

            case 10:
                printf("\nProgram ended.");
                break;

            default:
                printf("\nWrong option.");
        }

    } while(option != 10);

    return 0;
}


void create_ll()
{
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter -1 to stop.");

    printf("\nEnter data: ");
    scanf("%d", &num);

    while(num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        new_node->data = num;
        new_node->prev = NULL;
        new_node->next = NULL;

        if(start == NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = new_node;
            new_node->prev = ptr;
        }

        printf("Enter data: ");
        scanf("%d", &num);
    }
}


void display()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty.");
        return;
    }

    ptr = start;

    printf("\nDoubly Linked List: ");

    while(ptr != NULL)
    {
        printf("%d", ptr->data);

        if(ptr->next != NULL)
        {
            printf(" <-> ");
        }

        ptr = ptr->next;
    }
}


void insert_beg()
{
    struct node *new_node;
    int num;

    printf("\nEnter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;

    if(start != NULL)
    {
        start->prev = new_node;
    }

    start = new_node;

    printf("\nNode inserted at beginning.");
}


void insert_end()
{
    struct node *new_node, *ptr;
    int num;

    printf("\nEnter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(start == NULL)
    {
        start = new_node;
    }
    else
    {
        ptr = start;

        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = new_node;
        new_node->prev = ptr;
    }

    printf("\nNode inserted at end.");
}


void insert_before()
{
    struct node *new_node, *ptr;
    int num, val;

    printf("\nEnter data to insert: ");
    scanf("%d", &num);

    printf("Enter value before which node is inserted: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found.");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->next = ptr;
    new_node->prev = ptr->prev;

    if(ptr->prev != NULL)
    {
        ptr->prev->next = new_node;
    }
    else
    {
        start = new_node;
    }

    ptr->prev = new_node;

    printf("\nNode inserted.");
}


void insert_after()
{
    struct node *new_node, *ptr;
    int num, val;

    printf("\nEnter data to insert: ");
    scanf("%d", &num);

    printf("Enter value after which node is inserted: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found.");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;
    new_node->prev = ptr;
    new_node->next = ptr->next;

    if(ptr->next != NULL)
    {
        ptr->next->prev = new_node;
    }

    ptr->next = new_node;

    printf("\nNode inserted.");
}


void delete_beg()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty.");
        return;
    }

    ptr = start;
    start = start->next;

    if(start != NULL)
    {
        start->prev = NULL;
    }

    free(ptr);

    printf("\nNode deleted from beginning.");
}


void delete_end()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\nList is empty.");
        return;
    }

    ptr = start;

    if(start->next == NULL)
    {
        start = NULL;
        free(ptr);
    }
    else
    {
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->prev->next = NULL;
        free(ptr);
    }

    printf("\nNode deleted from end.");
}


void delete_node()
{
    struct node *ptr;
    int val;

    if(start == NULL)
    {
        printf("\nList is empty.");
        return;
    }

    printf("\nEnter value to delete: ");
    scanf("%d", &val);

    ptr = start;

    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("\nValue not found.");
        return;
    }

    if(ptr == start)
    {
        start = ptr->next;

        if(start != NULL)
        {
            start->prev = NULL;
        }
    }
    else
    {
        ptr->prev->next = ptr->next;

        if(ptr->next != NULL)
        {
            ptr->next->prev = ptr->prev;
        }
    }

    free(ptr);

    printf("\nNode deleted.");
}
