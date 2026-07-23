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
    int ans=INT_MIN;
    int sumi(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftsum=max(0,sumi(root->left));
        int rightsum=max(0,sumi(root->right));
        ans=max(ans,leftsum+rightsum+root->val);
        return root->val+max(leftsum,rightsum);
    }
    int maxPathSum(TreeNode* root) {
        sumi(root);
        return ans;
    }
};