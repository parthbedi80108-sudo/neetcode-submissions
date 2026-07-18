class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        vector<int>consecutive_seq;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)pq.push(nums[i]);
        int cnt=1;
        int curr=1;
        while(!pq.empty()){
            int top=pq.top();
            pq.pop();
            consecutive_seq.push_back(top);
        }
        for(int i=1;i<n;i++){
            if(consecutive_seq[i]-consecutive_seq[i-1]==1)curr++;
            else if(consecutive_seq[i]-consecutive_seq[i-1]!=0)curr=1;
            cnt=max(curr,cnt);
        }
        return cnt;
    }
};

































