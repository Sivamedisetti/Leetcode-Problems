class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int count=0;
        if(y>=x)
        {
            //check ba to the count
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
            //reversing the stack
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            //check ba add ab to the count
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
            //check ab add to count;
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
            //reverse the stack
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            //check ab add ba to the count
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