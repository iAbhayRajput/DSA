class Solution {
  public:
  
  void dfs_preorder(Node* node, vector<int>& path, vector<vector<int>>& ans){
      if(node==nullptr)return;
      path.push_back(node->data);
      if(node->left==nullptr and node->right==nullptr){
          ans.push_back(path);
      }
      else{
          dfs_preorder(node->left,path,ans);
          dfs_preorder(node->right,path,ans);
      }
      path.pop_back();
  }
    vector<vector<int>> Paths(Node* root) {
        if(root==nullptr) return {};
        vector<vector<int>> ans;
        vector<int>path;
        dfs_preorder(root,path,ans);
        return ans;
    }
};
