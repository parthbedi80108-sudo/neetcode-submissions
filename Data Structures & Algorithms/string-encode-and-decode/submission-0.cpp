class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string s="";
        for(int i=0;i<n;i++){
            int length=strs[i].length();
            s+=to_string(length);
            s+='#';
            s+=strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        int n=s.length();
        vector<string>decoded_str;
        int i=0;
        while(i<n){
            int j=i;
            while(s[j]!='#')j++;
            int length=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,length);
            decoded_str.push_back(word);
            i=j+1+length;
        }
        return decoded_str;
    }
};
