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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>vec;
        int count=1;
        while(head->next->next){
            count++;
            int l=head->val,m=head->next->val,r=head->next->next->val;
            if(l>m && m<r){
                vec.push_back(count);
            }
            if(l<m && m>r){
                vec.push_back(count);
            }
            head=head->next;
        }
        if(vec.size()<2)return {-1,-1};
        int mini=INT_MAX,maxi;
        for(int i=0;i<vec.size()-1;i++){
            int diff=vec[i+1]-vec[i];
            mini=min(mini,diff);
        }
        maxi=vec[vec.size()-1]-vec[0];

        return {mini,maxi};
    }
};