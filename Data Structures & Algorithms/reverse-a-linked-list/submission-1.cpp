class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;   // Save next node
            curr->next = prev;   // Reverse the link

            prev = curr;         // Move prev forward
            curr = next;         // Move curr forward
        }

        return prev;
    }
};