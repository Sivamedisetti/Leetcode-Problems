class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowSize = 0, ans = 0, cnt = 0;
        int n = nums.size();
        
        // Calculate the number of 1's in the array
        for(int num : nums) {
            if(num == 1) windowSize++;
        }

        // Early return if there are no 1's
        if(windowSize == 0) return 0;

        // Calculate initial count of 1's in the first window
        for(int i = 0; i < windowSize; i++) {
            if(nums[i] == 1) cnt++;
        }
        ans = cnt;

        // Slide the window over the array with a circular approach
        for(int i = 1; i < n; i++) {
            cnt += nums[(i + windowSize - 1) % n] - nums[i - 1];
            ans = max(ans, cnt);
        }

        return windowSize - ans;
    }
};
