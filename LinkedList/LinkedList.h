#pragma once

#include <stdlib.h>

/// @file LinkedList.h

typedef int ListDataType;

typedef struct Node_t Node;

typedef struct List_t List;

struct Node_t
{
    ListDataType data;
    Node *next;
};

struct List_t
{
    Node *head;
};

/**
 * @brief Create a List object.
 *
 * @return List* The created List object
 */
List *CreateList();

/**
 * @brief Free all memory allocated for the list.
 *
 * @param list The list to be freed.
 */
void FreeList(List *list);

/**
 * @brief Get the size of the list
 *
 * @param list The list to get the size of
 * @return size_t The size of the list
 */
size_t GetListSize(List *list);

/**
 * @brief Get the list's head
 *
 * @param list The list
 * @return Node* The list's head
 */
Node *GetListHead(List *list);

/**
 * @brief Get the next node for the given node
 *
 * @param currentNode The node to get the next node for
 * @return Node* The next node
 */
Node *GetNextNode(Node *currentNode);

/**
 * @brief Get the value of the Node
 *
 * @param node The Node to get the value from
 * @return ListDataType The value of the Node
 */
ListDataType GetValue(Node *node);

/**
 * @brief Inserts a new node after the given node.
 *
 * @param after The node after which the new node is inserted.
 * @param newValue The value of the new node.
 * @return Node* The new node.
 */
Node *Insert(Node *after, ListDataType newValue);

/**
 * @brief Appends a new node to the head of the list.
 *
 * @param list The list to append to.
 * @param newValue The value to append.
 * @return Node* The new head of the list.
 */
Node *PushFront(List *list, ListDataType newValue);

/**
 * @brief Append a new node to the end of the list
 *
 * @param list The list to append to
 * @param newValue The value to append
 * @return Node* The new node
 */
Node *PushBack(List *list, ListDataType newValue);

/**
 * @brief Removes the node from the front of the list.
 *
 * @param list The list to remove the node from.
 * @return ListDataType The value of the removed node.
 */
ListDataType PopFront(List *list);

/**
 * @brief Removes the node from the end of the list.
 *
 * @param list The list to remove the node from.
 * @return ListDataType The value of the removed node.
 */
ListDataType PopBack(List *list);

/**
 * @brief Delete node from list given node
 *
 * @param list The list to delete node from
 * @param target The node to delete
 */
void DeleteNode(List *list, Node *target);

/**
 * @brief Deletes a node from the list given the value
 *
 * @param list The list to delete the node from.
 * @param value The value of the node to delete.
 * @return Node* NULL
 */
Node *DeleteValue(List *list, ListDataType value);

/**
 * @brief Finds the first node with the given value.
 *
 * @param list The list to search.
 * @param value The value to search for.
 * @return Node* The first node with the given value.
 */
Node *Find(List *list, ListDataType value);
