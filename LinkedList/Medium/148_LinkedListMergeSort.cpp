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
    ListNode* mergeThem(ListNode* left,ListNode* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }

        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        if(left->val <= right->val){
            head=tail=left;
            left=left->next;
        }else{
            head=tail=right;
            right=right->next;
        }

        while(left!=NULL && right!=NULL){

            if(left->val <= right->val){
                tail->next=left;
                tail=tail->next;
                left=left->next;
            }else{
                tail->next=right;
                right=right->next;
                tail=tail->next;
            }

        }

        if(right==NULL)
        {
            tail->next=left;
        }

        if(left==NULL){
            tail->next=right;
        }

        return head;
    }
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* mid=findMid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;

        left= sortList(left);
        right= sortList(right);

        ListNode* ans=mergeThem(left,right);

        return ans;
    }
};