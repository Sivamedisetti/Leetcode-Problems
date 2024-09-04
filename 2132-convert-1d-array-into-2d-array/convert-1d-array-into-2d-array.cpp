class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>matrix(m , vector<int>(n , 0));
        int size = original.size();
        int index = 0;
        for(int i = 0;i<m ;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(index >= size) return {};
                matrix[i][j] = original[index];
                index++;
            }
        }

        if(index>size) return {};
        else if(index < size) return {};
        else return matrix;
    }
};