#include <string.h>

struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode *ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *parent;
    ptr->next = head;
    parent = ptr;

    while (head != NULL) {
        if (head->val == val) {
            parent->next = head->next;
        } else {
            parent = head;
        }

        head = head->next;
    }

    return ptr->next;
}