class Solution {
    void DFS(vector<vector<int>>&adj,vector<bool>&vis,int node){
        if(vis[node])return;
        vis[node]=true;
        for(int x:adj[node]){
            DFS(adj,vis,x);
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        int comp=0;
        vector<vector<int>>adj(n);
        vector<bool>vis(n,false);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                comp++;
                DFS(adj,vis,i);
            }
        }
        return comp;
    }
};
