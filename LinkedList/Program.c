#include <stdio.h>
#include "LinkedList.h"

int main()
{
    // Create a linked list
    List *list = CreateList();

    PushFront(list, 1);
    PushFront(list, 2);
    PushFront(list, 3);
    PushFront(list, 4);
    PushFront(list, 5);
    PushFront(list, 6);

    PushBack(list, 7);

    // Find value 3
    Node *node = Find(list, 3);
    if (node != NULL)
    {
        printf("Found value 3 at %p\n", node);
    }

    // Remove value 3
    DeleteValue(list, 3);

    // Find value 3
    node = Find(list, 3);
    if (node == NULL)
    {
        printf("Value 3 was removed\n");
    }

    // Pop front
    PopFront(list);

    // Pop back
    PopBack(list);

    // Print the size of the linked list
    printf("Size of list: %lu\n", GetListSize(list));

    // Print the elements of the linked list
    printf("List: ");
    Node *current = GetListHead(list);
    while (current != NULL)
    {
        printf("%d ", GetValue(current));
        current = GetNextNode(current);
    }
    printf("\n");

    // deallocate memory
    FreeList(list);

    return 0;
}
