class Solution {
private:
    int delrow[4]={0,1,0,-1};
    int delcol[4]={1,0,-1,0};  
    bool dfs(int sr,int sc,vector<vector<char>>& board,string word,int idx,vector<vector<int>>&vis){
        if(idx==word.size())return true;
        if(sr<0 or sr>=board.size() or sc<0 or sc>=board[0].size())return false;
        if(vis[sr][sc]!=0) return false;
        if(board[sr][sc]!=word[idx])return false;
        vis[sr][sc]=1;
        bool found=false;
        for(int i=0;i<4;i++){
            //cout<<i<<" ";
            found|= dfs(sr+delrow[i],sc+delcol[i],board,word,idx+1,vis);
        }
        vis[sr][sc] = 0;
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool funcall=false;
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    funcall=dfs(i,j,board,word,0,vis);
                    if(funcall==true)return true;
                }
            }
        }
        return false;
    }
};