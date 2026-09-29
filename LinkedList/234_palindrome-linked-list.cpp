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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<n/2;i++){
            temp=temp->next;
        }
        ListNode *current=temp;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        ListNode *first=head;
        ListNode *second=prev;

        while(second!=NULL){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;

    }
};