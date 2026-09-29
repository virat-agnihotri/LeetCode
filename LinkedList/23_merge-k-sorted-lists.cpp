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
class Solution{
    public:
    struct compare{
        bool operator()(ListNode* a,ListNode* b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>&lists){
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        for (int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                pq.push(lists[i]);
            }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;

        while(!pq.empty()){
            ListNode* smallest =pq.top();
            pq.pop();
            temp->next=smallest;
            temp=temp->next;
            if (smallest->next!=NULL){
                pq.push(smallest->next);
            }
        }
        return dummy->next;
    }
};

// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         int size=lists.size();
//         vector<int> newlist;
//         for(int i=0;i<size;i++){
//             ListNode* temp=lists[i];
//             while(temp!=NULL){
//                 newlist.push_back(temp->val);
//                 temp=temp->next;
//             }
//         }
//         // apply bubble sort in the newlist
//         int tempvar;
//         int size_newlist=newlist.size();
//         for(int i=0;i<size_newlist;i++){
//             for (int j=0;j<size_newlist-i-1;j++){
//                 if (newlist[j]>newlist[j+1]){
//                     tempvar=newlist[j];
//                     newlist[j]=newlist[j+1];
//                     newlist[j+1]=tempvar;
//                 }
//             }
//         }
//         // converting list into link list
//         ListNode *dummy=new ListNode(0);
//         ListNode *temp=dummy;

//         for(int x:newlist){
//             temp->next =new ListNode(x);
//             temp=temp->next;
//         }
//         return dummy->next;
//     }
// };

