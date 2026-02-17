/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>inorder(TreeNode* root){
        vector<int>s;
        if(!root){
            return s;
        }
        vector<int>left=inorder(root->left);
        s.insert(s.end(),left.begin(),left.end());
        s.push_back(root->val);
        vector<int>right=inorder(root->right);
        s.insert(s.end(),right.begin(),right.end());
        return s;
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        vector<int>v= inorder(root);
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1]){
                return false;
            }
        }
        return true;
    }
};