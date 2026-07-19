class Solution {
    int sq_sum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            if(n==1)return true;
            if(mp.count(n))return false;
            int sum=sq_sum(n);
            mp[n]++;
            n=sum;
        }
        return true;
    }
};
