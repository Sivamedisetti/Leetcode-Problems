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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>spiral(m,vector<int>(n,-1));
        
        int top=0,bottom=m-1,left=0,right=n-1;

        while(top<=bottom && left<=right && head!=NULL)
        {

            //right
            for(int i=left;i<=right;i++)
            {
                if(head==NULL)return spiral;
                spiral[top][i]=head->val;
                head=head->next;
            }
            top++;

            //bottom
            for(int i=top;i<=bottom;i++)
            {
                if(head==NULL)return spiral;
                spiral[i][right]=head->val;
                head=head->next;
            }
            right--;

            //left
            for(int i=right;i>=left;i--)
            {
                if(head==NULL)return spiral;
                spiral[bottom][i]=head->val;
                head=head->next;
            }
            bottom--;

            //top
            for(int i=bottom;i>=top;i--)
            {
                if(head==NULL)return spiral;
                spiral[i][left]=head->val;
                head=head->next;
            }
            left++;

        }
        return spiral;
    }
};