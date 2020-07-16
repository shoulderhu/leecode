#include <string.h>

struct ListNode *oddEvenList(struct ListNode* head) {
    struct ListNode *ptr1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *ptr2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *odd = NULL, *even = NULL;
    int idx = 3;

    if (head) {
        odd = head;
        head = head->next;

        if (head) {
            even = head;
            head = head->next;
        }
    }

    ptr1->next = odd;
    ptr2->next = even;

    while (head != NULL) {
        if (idx++ % 2 == 1) {
            odd->next = head;
            odd = head;
        } else {
            even->next = head;
            even = head;
        }

        head = head->next;
    }

    if (odd && even) {
        odd->next = ptr2->next;
        even->next = NULL;
    }

    return ptr1->next;
}