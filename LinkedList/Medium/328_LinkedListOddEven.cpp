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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* oddHead=new ListNode(-1);
        ListNode* odd=oddHead;
        ListNode* evenHead=new ListNode(-1);
        ListNode* even=evenHead;

        ListNode* curr=head;
        int count=1;

        while(curr){
            if(count %2 ==0 ){
                even->next=new ListNode(curr->val);
                even=even->next;
            }else{
                odd->next=new ListNode(curr->val);
                odd=odd->next;
            }
            curr=curr->next;
            count++;
        }

        even->next=NULL;
        odd->next=evenHead->next;

        return oddHead->next;

    }
};