#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *currentnode = head, *nextnode = head, *temp = NULL;
    int i = 0;
    while (i < n && nextnode) {
        nextnode = nextnode->next;
        i++;
    }
    if (!nextnode) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    while (nextnode->next) {
        currentnode = currentnode->next;
        nextnode = nextnode->next;
    }
    temp = currentnode->next;
    currentnode->next = currentnode->next->next;
    free(temp);
    return head;
}

// Helper function to create a new node
struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print the list
void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create a sample linked list: 1->2->3->4->5
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    // Remove 2nd node from the end
    head = removeNthFromEnd(head, 2);

    printf("After removing 2nd node from end: ");
    printList(head);

    // Free the memory
    struct ListNode* current = head;
    while (current != NULL) {
        struct ListNode* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
