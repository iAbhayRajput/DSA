class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        vector<int> result;
        if(!root) return result;
        
        stack<Node*> s1;
        stack<Node*> s2;
        
        s1.push(root);
        
        while(!s1.empty()||!s2.empty()){
            while(!s1.empty()){
                Node* temp =s1.top();
                s1.pop();
                result.push_back(temp->data);
                
                if(temp->right) s2.push(temp->right);
                if(temp->left) s2.push(temp->left);
            }
            while(!s2.empty()){
                Node* temp = s2.top();
                s2.pop();
                result.push_back(temp->data);
                
                if(temp->left) s1.push(temp->left);
                if(temp->right) s1.push(temp->right);
            }
        }
        return result;
    }
};
