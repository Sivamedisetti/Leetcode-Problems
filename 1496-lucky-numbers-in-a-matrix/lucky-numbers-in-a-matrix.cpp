class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>result;
        vector<int>list;
        int n=matrix.size();
        int m=matrix[0].size();
        // cout<<n<<" "<<m<<"\n";
        for(int i=0;i<n;i++){
            int rmin=INT_MAX;
            for(int j=0;j<m;j++){
                rmin=min(matrix[i][j],rmin);
            }
            list.push_back(rmin);
        }
        for(int i=0;i<m;i++){
            int cmax= INT_MIN;
            for(int j=0;j<n;j++){
                cmax=max(cmax,matrix[j][i]);
            }
            if(std::find(list.begin(),list.end(),cmax)!=list.end()){
                result.push_back(cmax);
            }
        }
        // for(auto it:list)cout<<it<<" ";
        return result;
    }

};