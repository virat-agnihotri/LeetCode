/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        vector<ListNode*> arr;
        while(temp!=NULL){ 
            for(int i=0;i<arr.size();i++){
                if(temp->next==arr[i]){
                    return true;
                }
            }
            arr.push_back(temp);
            temp=temp->next;

        }

        return false;

        
    }
};