class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        for(int i=0;i<n;i++){
            if(i==n-1)return area;
            for(int j=i+1;j<n;j++){
                int height=min(heights[i],heights[j]);
                area=max(area,(j-i)*height);
            }
        }
        return area;
    }
};
