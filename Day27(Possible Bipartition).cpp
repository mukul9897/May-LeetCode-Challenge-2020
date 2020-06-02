class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& d) {
        vector<int> g(N,-1);
        vector<vector<int>> adj(N,vector<int>());
        for(vector<int> & p:d){
            adj[p[0]-1].push_back(p[1]-1);
            adj[p[1]-1].push_back(p[0]-1);
        }
        for(int i=0;i<N;i++){
            if(g[i]== -1 && !dfs(adj,g,i,0))
                return false;
        }
        return true;
    }
    bool dfs(vector<vector<int>>& adj,vector<int>& g,int v,int grp){
        if(g[v] == -1)
            g[v]=grp;
        else 
            return g[v] == grp;
        for(int n : adj[v]){
            if(!dfs(adj,g,n,1-grp)) 
                return false;
        }
        return true;
    }
};
