class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        ListNode *temp2 = headB;

        vector<ListNode*> arr;

        while (temp != NULL) {
            arr.push_back(temp);
            temp = temp->next;
        }

        while (temp2 != NULL) {
            for (int i = 0; i < arr.size(); i++) {
                if (temp2 == arr[i]) {
                    return temp2;
                }
            }

            temp2 = temp2->next;
        }

        return NULL;
    }
};
