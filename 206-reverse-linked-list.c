struct ListNode *reverse(struct ListNode *parent, struct ListNode *head) {
    if (!head) {
        return head;
    } else {
        struct ListNode *next = head->next;
        head->next = parent;

        if (next) {
            return reverse(head, next);
        }

        return head;
    }
}

struct ListNode *reverseList(struct ListNode *head) {
    return reverse(NULL, head);
}