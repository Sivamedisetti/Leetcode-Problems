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
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        ListNode *t=head;
        ListNode *r=head->next;
        while(r!=NULL){
            if(r->next==NULL or r->next->next==NULL){
                return false;
            }
            if(r==t)return true;
            t=t->next;
            r=r->next->next;
        }
        return false;
    }
};