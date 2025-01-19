/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int count1=0;
        int count2=0;

        ListNode* first=headA;
        ListNode* second=headB;

        while(first!=NULL){
            count1+=1;
            first=first->next;
        }

        while(second!=NULL){
            count2+=1;
            second=second->next;
        }

        first=headA;
        second=headB;

        while(count1>count2){
            first=first->next;
            count1--;
        }

        while(count2>count1){
            second=second->next;
            count2--;
        }

        while(first && second){
            if(first==second){
                return first;
            }
            first=first->next;
            second=second->next;
        }

        return NULL;

    }

};