class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int sum=a^b;
            int carr=(a&b)<<1;
            a=sum;
            b=carr;
        }
        return a;
    }
};
