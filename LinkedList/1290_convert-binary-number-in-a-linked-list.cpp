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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        string binary="";
        int decimal=0;
        while(temp!=NULL){
            binary=binary+to_string(temp->val);
            temp=temp->next;
        }
        int j=0;
        for (int i=binary.size()-1;i>=0;i--){
            decimal=decimal+(binary[i]-'0')*pow(2,j);
            j++;
        }
        return decimal;
    }
};