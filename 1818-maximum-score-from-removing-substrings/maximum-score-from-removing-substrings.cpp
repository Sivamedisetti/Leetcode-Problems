class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int count=0;
        if(y>=x)
        {
            for(auto it:s)
            {
                if(!st.empty()&& st.top()=='b'&&it =='a')
                {
                    count+=y;
                    st.pop();
                }
                else{
                    st.push(it);
                }
            }
            s="";
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            cout<<s;
            for(auto ch:s){
                if(!st.empty()&& st.top()=='b'&& ch=='a')
                {
                    count+=x;
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        else
        {

            for(auto it:s)
              {
                if(!st.empty()&& st.top()=='a'&&it=='b')
                {
                    count+=x;
                    st.pop();
                }
                else st.push(it);
            }
             s="";
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            cout<<s;
            for(auto ch:s){
                if(!st.empty()&& st.top()=='a'&& ch=='b')
                {
                    count+=y;
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }

        }
            
        
        return count;
    }
};