/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* findRandomPointing(Node* curr1, Node* curr2, Node* x){
        while(curr1!=x){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr2;
    }
    Node* copyRandomList(Node* head) {
        
        Node* headCopy=new Node(0);
        Node* tailCopy=headCopy;

        Node* temp=head;

        while(temp){

            tailCopy->next=new Node(temp->val);
            temp=temp->next;
            tailCopy=tailCopy->next;

        }

        //delete the dummy node 0
        tailCopy=headCopy;
        headCopy=headCopy->next;
        delete tailCopy;

        //place the pointers at the starting again

        tailCopy=headCopy;
        temp=head;

        //pointing the randome pointers

        while(temp){

            tailCopy->random=findRandomPointing(head,headCopy,temp->random);
            tailCopy=tailCopy->next;
            temp=temp->next;

        }

        return headCopy;

    }
};