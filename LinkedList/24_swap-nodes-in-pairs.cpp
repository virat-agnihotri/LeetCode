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
    ListNode* swapPairs(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* current = head;
        ListNode* newHead = head->next;
        ListNode* prev = NULL;

        while (current != NULL && current->next != NULL) {

            ListNode* next = current->next;

            current->next = next->next;
            next->next = current;

            if (prev != NULL) {
                prev->next = next;
            }

            prev = current;
            current = current->next;
        }

        return newHead;
    }
};