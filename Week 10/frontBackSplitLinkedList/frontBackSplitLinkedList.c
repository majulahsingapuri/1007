//
//  main.c
//  frontBackSplitLinkedList
//
//  Created by Bhargav Singapuri on 30/3/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode{
    int item;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist{
    int size;
    ListNode *head;
} LinkedList;

void frontBackSplitLinkedList(LinkedList* ll, LinkedList *resultFrontList, LinkedList *resultBackList);
void printList(LinkedList *ll);
void removeAllItems(LinkedList *l);
ListNode * findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, int value);
int removeNode(LinkedList *ll, int index);

int main() {
    int c, i;
    LinkedList ll;
    LinkedList resultFrontList, resultBackList;

    //Initialize the linked list as an empty linked list
    ll.head = NULL;
    ll.size = 0;

    //Initialize the front linked list as an empty linked list
    resultFrontList.head = NULL;
    resultFrontList.size = 0;

    // Initialize the back linked list as an empty linked list
    resultBackList.head = NULL;
    resultBackList.size = 0;

    printf("1: Insert an integer to the linked list:\n");
    printf("2: Print the linked list:\n");
    printf("3: Split the linked list into two linked lists, frontList and backList:\n");
    printf("0: Quit:\n");
    printf("Please input your choice(1/2/3/0): ");
    scanf("%d", &c);

    while (c != 0) {
        switch (c) {
         case 1:
             printf("Input an integer that you want to add to the linked list: ");
             scanf("%d", &i);
             insertNode(&ll, ll.size, i);
             printf("The resulting linked list is: ");
             printList(&ll);
             break;
         case 2:
             printf("The resulting linked list is: ");
             printList(&ll);
             break;
         case 3:
             printf("The resulting linked lists after splitting the given linked list are:\n");
             frontBackSplitLinkedList(&ll, &resultFrontList, &resultBackList);
             printf("Front linked list: ");
             printList(&resultFrontList);
             printf("Back linked list: ");
             printList(&resultBackList);
             printf("\n");
             break;
         case 0:
             removeAllItems(&ll);
             removeAllItems(&resultFrontList);
             removeAllItems(&resultBackList);
             break;
         default:
             printf("Choice unknown;\n");
             break;
         }
    
         printf("\nPlease input your choice(1/2/3/0): ");
         scanf("%d", &c);
    }

    return 0;
}

void frontBackSplitLinkedList(LinkedList *ll, LinkedList *resultFrontList, LinkedList *resultBackList) {
    
    int frontSize = ll->size / 2, odd = ll->size % 2;
    ListNode *split;
    
    if (odd == 0) {
        split = findNode(ll, frontSize - 1);
    } else {
        split = findNode(ll, frontSize);
        frontSize++;
    }
    
    resultFrontList->size = frontSize;
    resultBackList->size = ll->size - frontSize;
    resultFrontList->head = ll->head;
    resultBackList->head = split->next;
    split->next = NULL;
    ll->head = NULL;
    ll->size = 0;
}

void printList(LinkedList *ll) {
    ListNode *cur;
    if (ll == NULL)
        return;
    cur = ll->head;
    if (cur == NULL)
        printf("Empty");
    while (cur != NULL) {
        printf("%d ", cur->item);
        cur = cur->next;
    }
    printf("\n");
}

void removeAllItems(LinkedList *ll) {
    ListNode *cur = ll->head;
    ListNode *tmp;

    while (cur != NULL){
        tmp = cur->next;
        free(cur);
        cur = tmp;
    }
    ll->head = NULL;
    ll->size = 0;
}

ListNode * findNode(LinkedList *ll, int index) {
    ListNode *temp;

    if (ll == NULL || index < 0 || index >= ll->size)
        return NULL;

    temp = ll->head;

    if (temp == NULL || index < 0)
        return NULL;

    while (index > 0) {
        temp = temp->next;
        if (temp == NULL)
            return NULL;
        index--;
    }

    return temp;
}

int insertNode(LinkedList *ll, int index, int value) {
    ListNode *pre, *cur;

    if (ll == NULL || index < 0 || index > ll->size + 1)
        return -1;

    if (ll->head == NULL || index == 0){
        cur = ll->head;
        ll->head = malloc(sizeof(ListNode));
        ll->head->item = value;
        ll->head->next = cur;
        ll->size++;
        return 0;
    }

    if ((pre = findNode(ll, index - 1)) != NULL){
        cur = pre->next;
        pre->next = malloc(sizeof(ListNode));
        pre->next->item = value;
        pre->next->next = cur;
        ll->size++;
        return 0;
    }

    return -1;
}

int removeNode(LinkedList *ll, int index) {
    ListNode *pre, *cur;

    // Highest index we can remove is size-1
    if (ll == NULL || index < 0 || index >= ll->size)
        return -1;

    // If removing first node, need to update head pointer
    if (index == 0) {
        cur = ll->head->next;
        free(ll->head);
        ll->head = cur;
        ll->size--;

        return 0;
    }

    if ((pre = findNode(ll, index - 1)) != NULL) {

        if (pre->next == NULL)
            return -1;

        cur = pre->next;
        pre->next = cur->next;
        free(cur);
        ll->size--;
        return 0;
    }

    return -1;
}
