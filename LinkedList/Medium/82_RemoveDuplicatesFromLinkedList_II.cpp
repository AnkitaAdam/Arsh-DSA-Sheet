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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>values;

        ListNode* curr=head;

        while(curr){
            values[curr->val]++;
            curr=curr->next;
        }

        ListNode* newListHead=new ListNode(-1);
        ListNode* newList=newListHead;
        vector<int>unique;

        for(auto pair:values){
            if(pair.second==1){
                unique.push_back(pair.first);
            }
        }

        sort(unique.begin(),unique.end());

        for(auto i:unique){
            newList->next=new ListNode(i);
            newList=newList->next;
        }
       
        return newListHead->next;
    }
};