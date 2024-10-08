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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL)return head;

        ListNode* curr = head;
        ListNode* next = head->next;

        while(next!=NULL)
        {
           ListNode* newNode = new ListNode(__gcd(curr->val,next->val));
           curr->next=newNode;
           newNode->next=next;
           curr=next;
           next=curr->next;
        }
        return head;


    }
};