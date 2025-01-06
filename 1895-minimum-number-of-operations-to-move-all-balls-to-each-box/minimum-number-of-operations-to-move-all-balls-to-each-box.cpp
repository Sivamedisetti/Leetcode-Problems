class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>vec;
        vector<int>ans;

        for(int i = 0; i<boxes.size(); i++)
        {
            if(boxes[i] == '1') vec.push_back(i);
        }

        for(int i = 0; i<boxes.size(); i++)
        {
            int moves = 0;
            for(auto it:vec)
            {
                moves += abs(it - i);
            }
            ans.push_back(moves);
        }
        return ans;
    }
};