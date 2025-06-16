#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}
struct ListNode* createList() {
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    int value;
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the digits (0-9): \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &value);
        if(value < 0 || value > 9) {
            printf("Please enter single digits only (0-9)\n");
            i--;
            continue;
        }
        struct ListNode* newNode = createNode(value);
        if(!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
int main() {
    printf("For first number:\n");
    struct ListNode* l1 = createList();
    printf("\nFor second number:\n");
    struct ListNode* l2 = createList();
    printf("\nl1 = ");
    printList(l1);
    printf("l2 = ");
    printList(l2);
    struct ListNode* result = addTwoNumbers(l1, l2);
    printf("result = ");
    printList(result);
    while(l1) {
        struct ListNode* temp = l1;
        l1 = l1->next;
        free(temp);
    }
    while(l2) {
        struct ListNode* temp = l2;
        l2 = l2->next;
        free(temp);
    }
    while(result) {
        struct ListNode* temp = result;
        result = result->next;
        free(temp);
    }
    return 0;
}