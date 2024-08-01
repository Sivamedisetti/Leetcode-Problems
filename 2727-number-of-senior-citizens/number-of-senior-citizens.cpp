class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;

        for(auto it:details){
            int age=0;
            age=age*10+it[11]-'0';
            age=age*10+it[12]-'0';
            cout<<age<<" ";
            if(age>60)cnt++;
        }
        return cnt;

    }
};