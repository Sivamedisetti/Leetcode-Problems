class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp[m+n];
        int i=0,j=0,k=0;
        while(i<m and j<n){
            if(nums1[i]>=nums2[j]){
                temp[k++]=nums2[j];
                j++;
            }
            else{
                temp[k++]=nums1[i];
                i++;
            }
        }
        while(i<m){
            temp[k++]=nums1[i++];
        }
        while(j<n){
            temp[k++]=nums2[j++];
        }

        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
    }
};