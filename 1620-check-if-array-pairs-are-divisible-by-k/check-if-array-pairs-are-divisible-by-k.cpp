#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> remainderCount;
        
        // Count the frequency of each remainder
        for (int num : arr) {
            int remainder = ((num % k) + k) % k; // Ensure positive remainder
            remainderCount[remainder]++;
        }
        
        // Check the conditions for pairing
        for (int i = 1; i < k; i++) {
            if (remainderCount[i] != remainderCount[k - i]) {
                return false; // Not equal pairs
            }
        }
        
        // Check for remainder 0
        if (remainderCount[0] % 2 != 0) {
            return false; // Cannot pair all zeros
        }
        
        return true;
    }
};
