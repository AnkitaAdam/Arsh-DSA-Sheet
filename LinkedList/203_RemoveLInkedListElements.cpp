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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL){
            return head;
        }
       
        if(head->next==NULL){
            if(head->val==val){
                delete head;
                return NULL;
            }
        }

        ListNode* t=head;
        int cnt=0;
        int cnt2=0;
        while(t){
            if(t->val == val){
                cnt+=1;
            }
            cnt2+=1;
            t=t->next;
        }

        if(cnt==cnt2) return NULL;

        while(head->val==val){
            head=head->next;
        }
    
        ListNode* prev=head;
        ListNode* curr=head->next;

        while(curr){

            
            if(curr->val == val){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }else{
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};