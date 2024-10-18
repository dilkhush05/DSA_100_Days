class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode local(0); // Dummy node to handle edge cases
        local.next = head;
        ListNode* first = &local;
        ListNode* second = &local;

        // Move first n + 1 steps ahead
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        // Move both pointers until first reaches the end
        while (first) {
            first = first->next;
            second = second->next;
        }

        // Skip the n-th node from the end
        second->next = second->next->next;

        return local.next; // Return the modified list
    }
};
