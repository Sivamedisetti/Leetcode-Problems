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
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(head==NULL)return false;
        ListNode *t=head;
        while(t!=NULL){
            // if(t->next==NULL){
            //     return false;
            // }
            if(t->val==INT_MIN)return true;
            t->val=INT_MIN;
            t=t->next;
        }
        return false;
    }
};