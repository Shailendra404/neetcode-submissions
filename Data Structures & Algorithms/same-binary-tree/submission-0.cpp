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
vector<string>t1;
vector<string>t2;
void preorder1(TreeNode*root)
{
    if(root==NULL)
    {
    t1.push_back("NULL");
    return;
    }
    t1.push_back(to_string(root->val));
    preorder1(root->left);
    preorder1(root->right);
}
void preorder2(TreeNode*root)
{
    if(root==NULL)
    {
    t2.push_back("NULL");
    return;
    }
    t2.push_back(to_string(root->val));
    preorder2(root->left);
    preorder2(root->right);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder1(p);
        preorder2(q);
        return t1==t2;
    }
};
