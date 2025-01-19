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
        ListNode* temp=head;
        // int num=0;
        int count=0;

        while(temp!=NULL){

            // num=num*10 + temp->val;
            count++;
            temp=temp->next;

        }
        // int decimalNo=0;
        // int mul=1;
        // while(num!=0){
        //     int rem=num%10;
        //     decimalNo+=(rem*mul);
        //     num/=10;
        //     mul*=2;
        // }

        // return decimalNo;

        int decimalNo=0;

        int i=count-1;
        temp=head;
        while(temp!=NULL){
            if(temp->val==1)
                decimalNo+=pow(2,i);
            temp=temp->next;
            i--;
        }

        return decimalNo;

    }
};