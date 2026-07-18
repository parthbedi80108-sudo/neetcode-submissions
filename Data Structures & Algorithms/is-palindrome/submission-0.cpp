class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char c:s){
            if(isalnum(c)){
                t+=tolower(c);
            }
        }
        string z=t;
        reverse(t.begin(),t.end());
        if(z==t)return true;
        return false;
    }
};
