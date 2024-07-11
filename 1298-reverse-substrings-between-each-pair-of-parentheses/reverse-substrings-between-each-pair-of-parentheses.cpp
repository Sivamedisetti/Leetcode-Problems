class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        for(auto it:s){
            if(it!=')'){
                string convert="";
                convert+=it;
                st.push(convert);
            }
            else
            {
                string temp="";
                while(st.top()!="("){
                    string c=st.top();
                    reverse(c.begin(),c.end());
                    temp+=c;
                    st.pop();
                }
                st.pop();
                st.push(temp);
            }
        }
        string ans="";
        vector<string>vec;
        while(!st.empty())
        {
            vec.push_back(st.top());
            st.pop();
        }
        for(int i=vec.size()-1;i>=0;i--){
            ans+=vec[i];
        }
        return ans;
    }
};