class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int water=0;
       vector<int>left_mx(n,0);
       vector<int>right_mx(n,0);
       int mx1=left_mx[0];
       for(int i=0;i<n;i++){
        mx1=max(mx1,height[i]);
        left_mx[i]=mx1;
       }
       int mx2=right_mx[n-1];
       for(int i=n-1;i>=0;i--){
        mx2=max(mx2,height[i]);
        right_mx[i]=mx2;
       }
       for(int i=0;i<n;i++){
        int left_max=left_mx[i];
        int right_max=right_mx[i];
        int cnt=min(left_max,right_max)-height[i];
        water+=cnt;
       }
       return water;
    }
};
