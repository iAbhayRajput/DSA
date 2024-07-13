#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val; 
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // CodeGenius
        vector<int> parent(n),dist(n,1e9);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        vector<pair<int,int>>adj[n];
        for(auto it: edges){
            int u=it[0]-1,v=it[1]-1,wt=it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        queue <vector<int>>q;
        dist[0]=0;
        q.push({0,0});
        while(q.size()>0){
            vector<int> it=q.front();
            int node_wt=it[0];
            int node=it[1];
            q.pop();
        
        for(auto it:adj[node]){
            int adjnode=it.first;
            int wt=it.second;
            if(dist[adjnode]>wt+node_wt){
                dist[adjnode]=wt+node_wt;
                parent[adjnode]=node;
                q.push({dist[adjnode],adjnode});
            }
            }
        }
        if(dist[n-1]==1e9) return {-1};
        vector<int> path;
        int r=n-1;
        while(r!=0 and r!=parent[r]){
            path.push_back(r+1);
            r=parent[r];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        vector<int> ans;
        ans.push_back(dist[n-1]);
        for(auto it:path){
            ans.push_back(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++) {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0]) {

        } else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
    }
}
