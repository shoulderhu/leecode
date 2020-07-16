struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *head = NULL;

    if (l1 && l2) {
        if (l1->val < l2->val) {
            head = l1;
            l1 = l1->next;
        } else {
            head = l2;
            l2 = l2->next;
        }
    } else if (l1) {
        head = l1;
        l1 = l1->next;
    } else if (l2) {
        head = l2;
        l2 = l2->next;
    }

    ptr->next = head;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            head->next = l1;
            head = head->next;
            l1 = l1->next;
        } else {
            head->next = l2;
            head = head->next;
            l2 = l2->next;
        }
    }

    if (l1) {
        head->next = l1;
    }
    if (l2) {
        head->next = l2;
    }

    return ptr->next;
}