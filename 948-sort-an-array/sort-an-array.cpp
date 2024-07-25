class Solution {
public:
    void merge(vector<int>&nums,int l,int mid,int r){
        vector<int>ans;
        int i=l,j=mid+1;
        while(i<=mid && j<=r){
            if(nums[i]<nums[j]){
                ans.push_back(nums[i++]);
            }
            else{
                ans.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            ans.push_back(nums[i++]);
        }
        while(j<=r){
            ans.push_back(nums[j++]);
        }
        int k =0;
        for(int  i=l;i<=r;i++){
            nums[i]=ans[k++];
        }

    }
    void merge_sort(vector<int>&nums,int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            merge_sort(nums,l,mid);
            merge_sort(nums,mid+1,r);
            merge(nums,l,mid,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        merge_sort(nums,l,r);
        return nums;
    }    
};