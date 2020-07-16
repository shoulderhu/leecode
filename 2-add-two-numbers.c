#include <string.h>

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
    int sum, carry = 0;
    ptr->next = l1;

    while (true) {
        if (l2 == NULL) {
            sum = l1->val + carry;
            carry = 0;
        } else {
            sum = l1->val + l2->val + carry;
            carry = 0;
            l2 = l2->next;
        }
        if (sum >= 10) {
            l1->val = sum - 10;
            carry = 1;
        } else {
            l1->val = sum;
        }
        if (l1->next) {
            l1 = l1->next;
        } else {
            break;
        }
    }

    if (l2 != NULL) {
        l1->next = l2;
    } else if (carry == 1) {
        l1->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        l1->next->val = carry;
        l1->next->next = NULL;
        carry = 0;
        return ptr->next;
    } else {
        l1->next = NULL;
        return ptr->next;
    }

    while (true) {
        sum = l2->val + carry;
        carry = 0;
        if (sum >= 10) {
            l2->val = sum - 10;
            carry = 1;
        } else {
            l2->val = sum;
        }
        if (l2->next) {
            l2 = l2->next;
        } else {
            break;
        }
    }

    if (carry == 1) {
        l2->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        l2->next->val = carry;
        l2->next->next = NULL;
        carry = 0;
    } else {
        l2->next = NULL;
    }

    return ptr->next;
}