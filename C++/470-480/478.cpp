/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/
#pragma GCC optimize ("-O3")
class Solution {
  public:
    void transformTree(Node *root) {
        int sum = 0;
        while(root){
            Node *pre = root -> right;
            if(!pre){
                sum += root -> data;
                root -> data = (sum - root -> data);
                root = root -> left;
            }
            else{
                while(pre -> left && pre -> left != root)
                    pre = pre -> left;
                if(pre -> left == root){
                    sum += root -> data;
                    root -> data = (sum - root -> data);
                    pre -> left = nullptr;
                    root = root -> left;
                }
                else{
                    pre -> left = root;
                    root = root -> right;
                }
            }
        }
        
    }
};
