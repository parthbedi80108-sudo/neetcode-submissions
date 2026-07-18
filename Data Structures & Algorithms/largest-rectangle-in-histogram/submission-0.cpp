class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next_small(n,-1);
        vector<int>prev_small(n,-1);
        stack<int>st1;
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st1.empty()&&heights[i]<heights[st1.top()]){
                int top=st1.top();
                st1.pop();
                next_small[top]=i;
            }
            st1.push(i);
        }
        for(int i=0;i<n;i++){
            if(next_small[i]==-1)next_small[i]=n;
        }
        for(int i=n-1;i>=0;i--){
            while(!st2.empty()&&heights[i]<heights[st2.top()]){
                int top=st2.top();
                st2.pop();
                prev_small[top]=i;
            }
            st2.push(i);
        }
        int area=0;
        for(int i=0;i<n;i++){
            int width=next_small[i]-prev_small[i]-1;
            area=max(area,heights[i]*width);
        }
        return area;
    }
};
