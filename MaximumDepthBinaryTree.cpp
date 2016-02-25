/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int max(int x, int y)
    {
        return x>y?x:y;
    }
    int maxDepth(TreeNode *root) {
        if(!root)
        return 0;
        
        return  max(maxDepth(root->left) +1 , maxDepth(root->right) +1);
    }
    
};