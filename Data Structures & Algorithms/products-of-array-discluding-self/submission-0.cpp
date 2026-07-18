class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>product(n);
        int cnt=count(nums.begin(),nums.end(),0);
        if(cnt>1){
            vector<int>product(n,0);
            return product;
        }
        else if(cnt==1){
            int pd=1;
            for(int i=0;i<n;i++){
                if(nums[i]==0)continue;
                pd*=nums[i];
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0)product[i]=pd;
                else product[i]=0;
            }
            return product;
        }
        else{
            int pd=1;
            for(int i=0;i<n;i++)pd*=nums[i];
            for(int i=0;i<n;i++){
                product[i]=(pd/nums[i]);
            }
            return product;
        }
        return product;
    }
};
