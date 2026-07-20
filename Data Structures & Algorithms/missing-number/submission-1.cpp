class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int i=0;
        for(auto &it:mp){
            if(it.first!=i)return i;
            i++;
        }
        return i;
    }
};
