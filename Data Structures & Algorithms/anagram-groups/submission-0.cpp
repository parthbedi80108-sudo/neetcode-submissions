class Solution {
    string sort_string(string s){
        sort(s.begin(),s.end());
        return s;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>grouped_Anagrams;
        int n=strs.size();
        for(int i=0;i<n;i++){
            mp[sort_string(strs[i])].push_back(strs[i]);
        }
        for(auto &it:mp){
            grouped_Anagrams.push_back(it.second);
        }
        return grouped_Anagrams;
    }
};
