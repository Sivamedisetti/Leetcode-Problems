class Solution {
public:
    int minimumDeletions(string s) {
        vector<int>vA;
        vector<int>vB;
        int i=0, j=0, cnt=0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a')vA.push_back(i);
            else vB.push_back(i);
        }

        while(i<vA.size() && j<vB.size()){
            if(vA[i]<vB[j]){
                i++;
            }
            else{
                cnt++;
                j++,i++;
            }
        }

        return cnt;

        
    }
};