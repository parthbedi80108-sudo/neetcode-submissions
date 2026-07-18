class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s:tokens){
            if(s!="+"&&s!="-"&&s!="*"&&s!="/"){
                int num=stoi(s);
                st.push(num);
            }
            else{
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                if(s=="+")st.push(top1+top2);
                if(s=="-")st.push(top2-top1);
                if(s=="*")st.push(top1*top2);
                if(s=="/")st.push(top2/top1);
            }
        }
        return st.top();
    }
};
