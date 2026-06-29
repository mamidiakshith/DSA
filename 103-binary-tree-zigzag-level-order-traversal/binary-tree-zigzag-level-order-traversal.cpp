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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==nullptr){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            vector<int>lvl;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left !=nullptr){
                    q.push(node->left);
                }
                if(node->right !=nullptr){
                    q.push(node->right);
                }
                lvl.push_back(node->val);
            }
            if(!flag){
                reverse(lvl.begin(),lvl.end());
            }
              v.push_back(lvl);
              flag=!flag;
        }
        return v;
    }
};