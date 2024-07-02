class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1 && digits[0]==9){
            digits.insert(digits.begin()+0,1);
            digits[1]=0;
            return digits;
        }
        else{
            int n=digits.size(),flag=0;
            for(int i=n-1;i>=0;i--){
                if(digits[i]!=9){
                    digits[i]++;
                    flag=1;
                    break;
                }
                else{
                    digits[i]=0;
                }
            }
            if(flag==0){
                digits.insert(digits.begin()+0,1);
            }
            else{
                return digits;
            }
        }
        return digits;
    }
    
};