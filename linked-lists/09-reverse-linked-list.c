
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

#ifdef LOCAL_TEST
int main() {
    struct ListNode n5 = {5, NULL};
    struct ListNode n4 = {4, &n5};
    struct ListNode n3 = {3, &n4};
    struct ListNode n2 = {2, &n3};
    struct ListNode n1 = {1, &n2};

    struct ListNode *result = reverseList(&n1);

    printf("Reversed list: ");
    while (result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }

    return 0;
}
#endif
