class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        if(x<0)flag=true;
        string s=to_string(x);
        if(flag)s.erase(0,1);
        std::reverse(s.begin(),s.end());
        if(flag)s.insert(0,"-");
        long long x_rev=stoll(s);
        if(x_rev>INT_MAX||x_rev<INT_MIN)return 0;
        return x_rev;
    }
};
