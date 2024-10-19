class Solution {
public:
    void invert(string &str)
    {
        for(int i = 0; i<str.size(); i++)
        {
            if( str[i] == '1') str[i] = '0';
            else str[i] = '1';
        }
    }
    char findKthBit(int n, int k) {
        string prev = "0";
        int i = 2;
        while(i <= n){
            string temp = prev;
            reverse(temp.begin(),temp.end());
            invert(temp);
            prev = prev + "1" + temp;
            i++;
        }
        return prev[k-1];
    }
};