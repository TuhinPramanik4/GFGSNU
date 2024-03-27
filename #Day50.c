struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head; // If the list is empty or has only one node, it's already reversed
    }

    struct ListNode* temp = head;
    int size = 0;

    // Calculate the size of the list
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }

    struct ListNode** a = (struct ListNode**)malloc(size * sizeof(struct ListNode*));
    if (a == NULL) {
        // Error handling for memory allocation failure
        return NULL;
    }

    temp = head;
    int i = 0;

        while (temp != NULL) {
        a[i] = temp;
        i++;
        temp = temp->next;
    }
    for (int j = size - 1; j >= 1; j--) {
        a[j]->next = a[j - 1];
    }
    a[0]->next = NULL; 
    struct ListNode* newHead = a[size - 1];
    free(a);
    return newHead;
}