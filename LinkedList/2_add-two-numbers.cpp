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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode *temp=&dummy;

        int carry=0;
        while(l1!=NULL||l2!=NULL||carry!=0){
            int sum=carry;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;

            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }
        return dummy.next;
        
    

        // ListNode *temp1=l1;
        // ListNode *temp2=l2;
        // int n=0;
        // int m=0;
        // string str1="";
        // string str2="";
        // while(temp1!=NULL){
        //     n++;
        //     str1=str1+to_string(temp1->val);
        //     temp1=temp1->next;
        // }
        // while(temp2!=NULL){
        //     m++;
        //     str2=str2+to_string(temp2->val);
        //     temp2=temp2->next;
        // }
        // string revstr1="";
        // string revstr2="";
        // for (int i=n-1;i>=0;i--){
        //     revstr1+=str1[i];
        // }
        // for (int i=m-1;i>=0;i--){
        //     revstr2+=str2[i];
        // }
        // int sum=stoi(revstr1)+stoi(revstr2);
        // string b=to_string(sum);
        // int size=b.size();
        // vector<int> arr;
        // for(int i=size-1;i>=0;i--){
        //     arr.push_back(b[i]-'0');
        // }
        
        // ListNode *head=NULL;
        // ListNode *tail=NULL;

        // for(int x:arr){
        //     ListNode *newnode=new ListNode(x);
        //     if (head==NULL){
        //         head=newnode;
        //         tail=newnode;
            
        //     }
        //     else{
        //         tail->next=newnode;
        //         tail=newnode;
        //     }
        // }
        // return head;
    }
};