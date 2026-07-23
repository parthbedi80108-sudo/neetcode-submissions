class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>DP1(n-1);
        DP1[0]=nums[0];
        DP1[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++){
            DP1[i]=max(DP1[i-2]+nums[i],DP1[i-1]);
        }
        int ans1=DP1[n-2];
        vector<int>nums2;
        for(int i=1;i<n;i++)nums2.push_back(nums[i]);
        vector<int>DP2(n-1);
        DP2[0]=nums2[0];
        DP2[1]=max(nums2[0],nums2[1]);
        for(int i=2;i<n-1;i++){
            DP2[i]=max(DP2[i-2]+nums2[i],DP2[i-1]);
        }
        int ans2=DP2[n-2];
        return max(ans1,ans2);
    }
};
