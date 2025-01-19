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
        
        ListNode* head=new ListNode(0);

        ListNode* curr=head;

        int sum=0;
        int carry=0;


        while(l1 || l2 || carry){
            sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            curr->next=new ListNode(sum%10);
            carry=sum/10;
            curr=curr->next;

        }

        while(carry){

            curr->next=new ListNode(carry%10);
            carry/=10;
        }

        return head->next;
        
        
    }
};