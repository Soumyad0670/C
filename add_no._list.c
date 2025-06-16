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
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    struct ListNode* head = l1;  
    int carry = 0;
    while (l1) {
        int sum = l1->val + carry + (l2 ? l2->val : 0);
        l1->val = sum % 10;
        carry = sum / 10;
        if (!l1->next) {
            if (l2 && l2->next) {
                l1->next = l2->next;  
                l2->next = NULL;      
                l1 = l1->next;
                l2 = NULL;
            } else if (carry) {
                l1->next = createNode(carry);
                break;
            } else {
                break;
            }
        } else {
            l1 = l1->next;
            l2 = l2 ? l2->next : NULL;
        }
    }
    return head;
}
void printList(struct ListNode* head) {
    while (head) {
        printf("%d", head->val);
        if (head->next) printf(" → ");
        head = head->next;
    }
    printf("\n");
}
int main() {
    struct ListNode* l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);
    struct ListNode* l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);
    printf("l1 = ");
    printList(l1);
    printf("l2 = ");
    printList(l2);
    struct ListNode* result = addTwoNumbers(l1, l2);
    printf("result = ");
    printList(result);
    return 0;
}

// l1 = 2 → 4 → 3      // represents 342
// l2 = 5 → 6 → 4      // represents 465
// Expected output:
// result = 7 → 0 → 8   // because 342 + 465 = 807