class DSU{
public:
    vector<int>parent, rank;
    DSU(int n){
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0;i<n;i++){
            parent[i] = i;
        }
    }
    int FindParent(int x){
        return parent[x] = parent[x] == x ? x : FindParent(parent[x]);
    }
    bool unionFind(int x, int y){
        int xSet = FindParent(x), ySet = FindParent(y);
        if(xSet != ySet){
            rank[xSet] < rank[ySet] ? parent[xSet] = ySet : parent[ySet] = xSet;
            rank[xSet] += rank[xSet] == rank[ySet];
            return true;
        }
        return false;
    }
};
class Solution {
  public:
    int minConnect(int V, vector<vector<int>>& edges) {

        DSU dsu(V);
        int extraEdges = 0;
        for(auto it : edges){
            bool flag = dsu.unionFind(it[0], it[1]);
            if(!flag)extraEdges++;
        }
        map<int, vector<int>>mpp;
        for(int i = 0;i<V;i++){
            mpp[dsu.FindParent(i)].push_back(i);
        }
        if(mpp.size() == 1)return 0;
        int components = mpp.size();
        return extraEdges >= components-1 ? components - 1 : -1;
    }
};
