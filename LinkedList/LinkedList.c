#include <malloc.h>
#include "LinkedList.h"

List *CreateList()
{
    // Allocate memory for the list
    List *list = (List *) malloc(sizeof(List));
    // failed to allocate memory
    if (list == NULL)
    {
        return NULL;
    }
    // initialize the list head
    list->head = NULL;
    return list;
}

void FreeList(List *list)
{
    // check if the list is empty
    if (list == NULL)
    {
        return;
    }
    // free the memory of the list
    Node *node = GetListHead(list);
    while (node != NULL)
    {
        Node *next = GetNextNode(node);
        free(node);
        node = next;
    }
    // free the list
    free(list);
}

size_t GetListSize(List *list)
{
    size_t size = 0;
    Node *node = GetListHead(list);
    while (node != NULL)
    {
        size++;
        node = GetNextNode(node);
    }
    return size;
}

Node *GetListHead(List *list)
{
    return list->head;
}

Node *GetNextNode(Node *currentNode)
{
    return currentNode->next;
}

ListDataType GetValue(Node *node)
{
    return node->data;
}

Node *Insert(Node *after, ListDataType newValue)
{
    // return NULL if after is NULL
    if (after == NULL)
    {
        return NULL;
    }
    // allocate memory for the new node
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = newValue;
    newNode->next = after->next;
    // insert the new node after the after node
    after->next = newNode;
    return newNode;
}

Node *PushFront(List *list, ListDataType newValue)
{
    // check if the list is empty
    if (list == NULL)
    {
        return NULL;
    }
    // create new node pointing to the head
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = newValue;
    newNode->next = list->head;
    // update the head
    list->head = newNode;
    return newNode;
}

Node *PushBack(List *list, ListDataType newValue)
{
    // check if the list is empty
    if (list == NULL)
    {
        return NULL;
    }
    Node *node = GetListHead(list);
    // if the list is empty, insert the new node at the head
    if (node == NULL)
    {
        return PushFront(list, newValue);
    }
    // find the last node
    while (GetNextNode(node) != NULL)
    {
        node = GetNextNode(node);
    }
    // insert the new node after the last node
    return Insert(node, newValue);
}

ListDataType PopFront(List *list)
{
    // check if the list is NULL
    if (list == NULL)
    {
        return 0;
    }
    // remove head of list and return it
    Node *node = GetListHead(list);
    // check if the list is empty
    if (node == NULL)
    {
        return 0;
    }
    // update the head
    list->head = GetNextNode(node);
    ListDataType value = GetValue(node);
    // free the memory of the node
    free(node);
    return value;
}

ListDataType PopBack(List *list)
{
    // check if the list is NULL
    if (list == NULL)
    {
        return 0;
    }
    // remove tail of list and return it
    Node *node = GetListHead(list);
    // check if the list is empty
    if (node == NULL)
    {
        return 0;
    }
    // find the last node
    while (GetNextNode(GetNextNode(node)) != NULL)
    {
        node = GetNextNode(node);
    }
    ListDataType value = GetValue(GetNextNode(node));
    // free the memory of the node
    free(GetNextNode(node));
    node->next = NULL;
    return value;
}

void DeleteNode(List *list, Node *target)
{
    // check if the list is NULL
    if (list == NULL)
    {
        return;
    }
    Node *node = GetListHead(list);
    if (node == NULL)
    {
        return;
    }
    if (node == target)
    {
        list->head = GetNextNode(node);
        free(node);
        return;
    }
    while (node->next != target)
    {
        node = GetNextNode(node);
    }
    node->next = GetNextNode(target);
    free(target);
}

Node *DeleteValue(List *list, ListDataType value)
{
    // check if the list is NULL
    if (list == NULL)
    {
        return NULL;
    }
    Node *node = GetListHead(list);
    if (node == NULL)
    {
        return NULL;
    }
    if (GetValue(node) == value)
    {
        list->head = GetNextNode(node);
        free(node);
        return NULL;
    }
    while (GetNextNode(node) != NULL)
    {
        if (GetValue(GetNextNode(node)) == value)
        {
            Node *target = GetNextNode(node);
            node->next = GetNextNode(target);
            free(target);
            return NULL;
        }
        node = GetNextNode(node);
    }
    return NULL;
}

Node *Find(List *list, ListDataType value)
{
    // check if the list is NULL
    if (list == NULL)
    {
        return NULL;
    }
    Node *node = GetListHead(list);
    if (node == NULL)
    {
        return NULL;
    }
    if (GetValue(node) == value)
    {
        return node;
    }
    while (GetNextNode(node) != NULL)
    {
        if (GetValue(GetNextNode(node)) == value)
        {
            return GetNextNode(node);
        }
        node = GetNextNode(node);
    }
    return NULL;
}
