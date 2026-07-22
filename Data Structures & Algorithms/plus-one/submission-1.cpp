class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]+=1;
            return digits;
        }
        int cnt=count(digits.begin(),digits.end(),9);
        if(cnt==n){
            vector<int>ans(n+1,0);
            ans[0]=1;
            return ans;
        }
        else{
            for(int i=n-1;i>0;i--){
                if(digits[i]==9){
                    digits[i]=0;
                    if(digits[i-1]!=9){
                        digits[i-1]+=1;
                        break;
                    }
                }
            }
            return digits;
        }
        return digits;
    }
};
