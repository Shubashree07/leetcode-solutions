
# LeetCode Practice – Problem 09

**Name:** Shuba Shree G J  
**Roll Number:** R25EF258  
**Course:** B.Tech CSE  
**University:** REVA University  
**Programming Language:** C

---

## 09. Reverse Linked List

- **LeetCode Problem:** [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- **Difficulty:** Easy
- **Category:** Linked Lists
- **Language:** C
- **Status:** Accepted

### Problem Description

Given the head of a singly linked list, reverse the list and return the reversed list.

### Approach

The iterative approach uses three pointers:

1. `prev` – Stores the previous node.
2. `current` – Points to the current node.
3. `next` – Temporarily stores the next node.

Steps:
1. Initialize `prev` as NULL.
2. Traverse the linked list using `current`.
3. Store the next node in `next`.
4. Change the current node's next pointer to `prev`.
5. Move `prev` and `current` one step forward.
6. Repeat until the list ends.
7. Return `prev` as the new head.

### C Code

```c
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
```

### Complexity Analysis

- **Time Complexity:** O(n) – Each node is visited once.
- **Space Complexity:** O(1) – Only three pointer variables are used.

### Local Testing

**Input:**
`1 -> 2 -> 3 -> 4 -> 5`

**Output:**
`5 -> 4 -> 3 -> 2 -> 1`

### LeetCode Submission Result

**Result:** Accepted

### Screenshot

![LeetCode Accepted Result](09-result.png)
