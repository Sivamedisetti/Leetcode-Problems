class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folders=0;
        for(auto it:logs){
            if(it=="../"){
                if(folders>0){
                    folders--;
                }
            }
            else if(it=="./"){
                continue;
            }
            else{
                folders++;
            }
        }
        return folders;
       
    }
};