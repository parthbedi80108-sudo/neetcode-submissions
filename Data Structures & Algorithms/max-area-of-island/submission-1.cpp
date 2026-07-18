class Solution {
    void DFS(vector<vector<int>> &grid,int i,int j,int &area){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0)return;
        grid[i][j]=0;
        area++;
        DFS(grid,i+1,j,area);
        DFS(grid,i,j+1,area);
        DFS(grid,i-1,j,area);
        DFS(grid,i,j-1,area);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int mx_Area=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int area=0;
                    DFS(grid,i,j,area);
                    mx_Area=max(mx_Area,area);
                }
            }
        }
        return mx_Area;
    }
};
