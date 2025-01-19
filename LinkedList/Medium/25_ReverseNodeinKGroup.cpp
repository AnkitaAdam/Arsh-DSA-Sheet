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
    ListNode* reverseKGroup(ListNode* head, int k) {

        int length=0;
        ListNode* temp=head;

        while(temp){
            length+=1;
            temp=temp->next;

        }

        ListNode* first=new ListNode(0);
        first->next=head;
        head=first;



        while(length>=k && first->next){

            int x=k;

            ListNode* second=first->next;
            ListNode* curr=first->next;
            ListNode* prev=first;
            ListNode* future=NULL;

            while(curr && x){
                future=curr->next;
                curr->next=prev;
                prev=curr;
                curr=future;
                x--;
            }

            length-=k;
            first->next=prev;
            second->next=curr;

            first=second;
        }

        return head->next;
    }
};