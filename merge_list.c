#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}
void insertNode(struct ListNode** head, int value) {
    struct ListNode* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct ListNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // ... (keep your existing implementation)
}
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct ListNode *list1 = NULL, *list2 = NULL;
    int n1, n2, value;
    printf("Enter number of elements in first list: ");
    scanf("%d", &n1);
    printf("Enter elements for first list:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &value);
        insertNode(&list1, value);
    }
    printf("Enter number of elements in second list: ");
    scanf("%d", &n2);
    printf("Enter elements for second list:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &value);
        insertNode(&list2, value);
    }
    printf("\nFirst list: ");
    printList(list1);
    printf("Second list: ");
    printList(list2);
    struct ListNode* mergedList = mergeTwoLists(list1, list2);
    printf("Merged list: ");
    printList(mergedList);
    return 0;
}
