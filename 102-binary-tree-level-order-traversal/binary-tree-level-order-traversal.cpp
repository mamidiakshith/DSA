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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==nullptr){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>lvl;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* dummy=q.front();
                q.pop();
                if(dummy->left!=nullptr){
                    q.push(dummy->left);
                }
                if(dummy->right!=nullptr){
                    q.push(dummy->right);
                }
                lvl.push_back(dummy->val);
            }
            v.push_back(lvl);
        }
        return v;
    }
};