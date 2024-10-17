class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int max_ind = 0, st_pos = 0;
        while(st_pos < s.size()-1){
            int maxi = 0; 
            for(int i = st_pos; i<s.size(); i++)
            {
                int dig = s[i] - '0';
                if(dig >= maxi)
                {
                    max_ind = i;
                    maxi = dig;
                }
            }
            if(s[st_pos] != s[max_ind])
            {
                cout<<s[st_pos];
                swap(s[st_pos], s[max_ind]);
                break;
            }
            st_pos++;
        }
        return stoi(s);
    }
};