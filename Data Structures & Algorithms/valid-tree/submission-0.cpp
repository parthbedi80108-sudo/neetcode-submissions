class Solution {
    void DFS(vector<vector<int>>&adj,vector<bool>&vis1,int node){
        if(vis1[node])return;
        vis1[node]=true;
        for(int x:adj[node]){
            DFS(adj,vis1,x);
        }
    }
    bool isCycle(vector<vector<int>>&adj,vector<bool>&vis2,int node,int parent){
        vis2[node]=true;
        for(int x:adj[node]){
            if(!vis2[x]){
                if(isCycle(adj,vis2,x,node))return true;
            }
            else if(x!=parent)return true;
        }
        return false;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<bool>vis1(n,false);
        vector<bool>vis2(n,false);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        DFS(adj,vis1,0);
        bool flag1=true;
        for(int i=0;i<n;i++){
            if(!vis1[i])flag1=false;
        }
        if(!flag1)return false;
        bool flag2=isCycle(adj,vis2,0,-1);
        return flag1&&(!flag2);
    }
};
