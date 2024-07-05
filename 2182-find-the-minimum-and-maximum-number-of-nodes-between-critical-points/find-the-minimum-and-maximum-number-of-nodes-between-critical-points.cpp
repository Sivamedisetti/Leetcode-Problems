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
            int left=head->val,mid=head->next->val,right=head->next->next->val;
            if(left>mid && mid<right){
                vec.push_back(count);
            }
            if(left<mid && mid>right){
                vec.push_back(count);
            }
            head=head->next;
        }
        if(vec.size()<2)return {-1,-1};
        int mini=INT_MAX,maxi;
        for(int i=0;i<vec.size()-1;i++){
            mini=min(mini,vec[i+1]-vec[i]);
        }
        maxi=vec[vec.size()-1]-vec[0];
        return {mini,maxi};
    }
};