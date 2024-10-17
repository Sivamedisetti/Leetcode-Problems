class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);  // Convert num to string
        int n = s.size();
        
        // Step 1: Precompute the rightmost max digit's index for each position
        vector<int> rightMaxIndex(n);
        rightMaxIndex[n-1] = n-1;  // Last digit is its own rightmost max
        
        // Fill rightMaxIndex array
        for (int i = n-2; i >= 0; i--) {
            if (s[i] > s[rightMaxIndex[i+1]]) {
                rightMaxIndex[i] = i;  // Current digit is larger
            } else {
                rightMaxIndex[i] = rightMaxIndex[i+1];  // Use the rightmost max
            }
        }
        
        // Step 2: Find the first place to swap
        for (int i = 0; i < n; i++) {
            if (s[i] != s[rightMaxIndex[i]]) {
                // Swap the current digit with the rightmost larger digit
                swap(s[i], s[rightMaxIndex[i]]);
                break;  // Only one swap allowed, so exit after the first swap
            }
        }
        
        // Convert the modified string back to an integer and return it
        return stoi(s);
    }
};
