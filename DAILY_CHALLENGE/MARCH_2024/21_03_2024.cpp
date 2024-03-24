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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        ListNode* back=head;
        ListNode* curr=head;
        ListNode* front=head->next;

        bool flag=true;
        while(front){
            curr=front;
            front=curr->next;
            curr->next=back;
            if(flag){
                back->next=NULL;
                flag=false;
            }
            back=curr;
        }
        
        return curr;
    }
};
