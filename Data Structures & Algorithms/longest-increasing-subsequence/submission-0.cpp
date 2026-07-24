class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>DP(n);
        DP[0]=1;
        int mxlen=1;
        for(int i=1;i<n;i++){
            int len=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    len=max(len,DP[j]+1);
                }
            }
            DP[i]=len;
        }
        return *max_element(DP.begin(),DP.end());
    }
};
