class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto &it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>topKfreq;
        for(int i=0;i<k;i++){
            int top=pq.top().second;
            pq.pop();
            topKfreq.push_back(top);
        }
        return topKfreq;
    }
};
