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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        if (head1==NULL || head2==NULL){
            return head1==NULL?head2:head1;
        }
        if (head1->val<=head2->val){
            head1->next=(mergeTwoLists(head1->next,head2));
            return head1;
        }else{
            head2->next=(mergeTwoLists(head1,head2->next));
            return head2;
        }

        
        // if (list1 == NULL)
        //     return list2;

        // if (list2 == NULL)
        //     return list1;

        // ListNode* temp=list1;
        // int n=0;
        // while(temp!=NULL){
        //     n++;
        //     temp=temp->next;

        // }
        // temp=list2;
        // while(temp!=NULL){
        //     n++;
        //     temp=temp->next;

        // }
        // temp = list1;
        // while (temp->next != NULL) {
        //     temp = temp->next;
        // }
        // temp->next = list2;
        // ListNode* current;
        
        // for (int i=0;i<n;i++){
        //     current=list1;
        
        //     for (int j=0;j<n-i-1;j++){
        //         int a=current->val;
        //         int b=current->next->val;
        //         if(a>b){
        //             int c=current->val;
        //             current->val=current->next->val;
        //             current->next->val=c;
        //         }
        //         current=current->next;
        //     }

        // }
        // return list1;
    }
};