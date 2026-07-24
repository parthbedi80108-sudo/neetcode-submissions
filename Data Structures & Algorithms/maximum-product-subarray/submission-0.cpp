class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>DP_min(n);
        vector<int>DP_max(n);
        DP_max[0]=nums[0];
        DP_min[0]=nums[0];
        for(int i=1;i<n;i++){
            DP_max[i]=max({nums[i],DP_max[i-1]*nums[i],DP_min[i-1]*nums[i]});
            DP_min[i]=min({nums[i],DP_max[i-1]*nums[i],DP_min[i-1]*nums[i]});
        }
        return *max_element(DP_max.begin(),DP_max.end());
    }
};
