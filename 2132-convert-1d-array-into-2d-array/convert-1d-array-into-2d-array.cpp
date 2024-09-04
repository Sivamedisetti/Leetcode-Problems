class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>Array;
        vector<int>vec;
        for(int i=0;i<original.size();i++){
            vec.push_back(original[i]);
            if(vec.size()==n)
            {
                Array.push_back(vec);
                vec.clear();
            }
            
        }
        if(vec.size()!=0) return {};
        if(Array.size()!=m) return {};
        return Array; 
    }
};