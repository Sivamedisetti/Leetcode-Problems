class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char>st;
        int n = expression.size();
        st.push(expression[0]);
        int i = 1;
        while(!st.empty())
        {
           if(st.top() != ')' && i < n)
           {
                if(expression[i]!= ',') st.push(expression[i]);
                i++;
           }
           else
           {
              st.pop();
              int tc = 0, fc = 0;
              while(st.top() != '(')
              {
                st.top() == 't' ? tc++ : fc++;
                st.pop();
              }
              st.pop();
              char ch = st.top();
              st.pop();
              ch == '&' ? st.push(fc == 0 ? 't':'f'):(ch == '|' ? st.push(tc>0 ? 't':'f'):st.push(tc ? 'f' : 't'));
           }
           if(st.size() == 1)
           {
             break;
           }
        }
        if(st.top() == 't') return true;
        return false;

    }
};