/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* groupPrev = dummy;

        while (true) {

            // Find the kth node of the current group
            ListNode* kth = groupPrev;

            for (int i = 0; i < k; i++) {
                kth = kth->next;

                // Fewer than k nodes remain
                if (kth == nullptr) {
                    return dummy->next;
                }
            }

            // Node after the current group
            ListNode* groupNext = kth->next;

            // Reverse the current group
            ListNode* prev = groupNext;
            ListNode* current = groupPrev->next;

            while (current != groupNext) {

                ListNode* next = current->next;

                current->next = prev;

                prev = current;
                current = next;
            }

            // Connect previous part to reversed group
            ListNode* temp = groupPrev->next;

            groupPrev->next = kth;

            // Move groupPrev to the end of the reversed group
            groupPrev = temp;
        }
    }
};