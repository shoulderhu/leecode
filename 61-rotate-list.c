struct ListNode *rotateRight(struct ListNode *head, int k) {
    int len = 1, times;
    struct ListNode *tmp = head, *start;

    while (tmp && tmp->next) {
        tmp = tmp->next;
        ++len;
    }

    if (len <= 1 || k == 0) {
        return head;
    }

    tmp->next = head;
    times = len - k % len;

    for (int i = 0; i < times; ++i) {
        tmp = tmp->next;
    }

    start = tmp->next;
    tmp->next = NULL;
    return start;
}