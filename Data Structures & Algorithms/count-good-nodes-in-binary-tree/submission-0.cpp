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
int solve(TreeNode*root,int maxv)
{
    int count=0;
    if(root==NULL)
    return 0;
    if(root->val>=maxv)
    count=1;
    maxv=max(maxv,root->val);
    count+=solve(root->left,maxv);
    count+=solve(root->right,maxv);
    return count;
}
    int goodNodes(TreeNode* root) {
        return solve(root,root->val);
    }
};
