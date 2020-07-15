struct ListNode *swap(struct ListNode *head) {
    if (!head || !(head->next)) {
        return head;
    } else {
        struct ListNode *tmp = head;
        head = head->next;
        tmp->next = head->next;
        head->next = tmp;

        if (head->next->next) {
            tmp->next = swap(head->next->next);
        }

        return head;
    }
}

struct ListNode *swapPairs(struct ListNode *head) {
    return swap(head);
}