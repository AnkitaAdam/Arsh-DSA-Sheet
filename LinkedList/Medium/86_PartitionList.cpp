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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* lessHead=new ListNode(-1);
        ListNode* greaterHead=new ListNode(-1);

        ListNode* lessTail=lessHead;
        ListNode* greaterTail=greaterHead;


        ListNode* curr=head;

        while(curr!=NULL){
            if(curr->val < x){
                lessTail->next=curr;
                lessTail=lessTail->next;
            }else{
                greaterTail->next=curr;
                greaterTail=greaterTail->next;
            }
            curr=curr->next; 
        }

        
        greaterTail->next=NULL;
        lessTail->next=greaterHead->next;
        
        return lessHead->next;
    
    }
};