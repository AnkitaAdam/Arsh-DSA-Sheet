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

    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* future=NULL;

        while(head){

            future=head->next;
            head->next=prev;
            prev=head;
            head=future;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* curr1=reverseList(l1);
        ListNode* curr2=reverseList(l2);
        ListNode* sumListHead=new ListNode(0);
        ListNode* sumList=sumListHead;

        int sum=0;
        int carry=0;

        while(curr1 || curr2 || carry){
            sum=0;
            if(curr1!=NULL){

                sum+=curr1->val;
                curr1=curr1->next;
            }

            if(curr2!=NULL){

                sum+=curr2->val;
                curr2=curr2->next;
            }

            sum+=carry;
            sumList->next=new ListNode(sum%10);
            carry=sum/10;
            sumList=sumList->next;
            
        }

        while(carry){
            sumList->next=new ListNode(carry%10);
            carry/=10;

        }

        sumList=reverseList(sumListHead->next);

        return sumList;
    }
};


// 7 2 4 3
//   5 6 4
// ========
// 7  8 0 7