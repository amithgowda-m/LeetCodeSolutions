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
    int dominantCount=0;
    int helper(TreeNode* node){
        if(!node) return 0;
        int leftMax = helper(node->left);
        int rightMax = helper(node->right);

        if(node->val >= leftMax && node->val>=rightMax) dominantCount++;

        return max({node->val,leftMax,rightMax});
    }
    int countDominantNodes(TreeNode* root) {
        TreeNode* n = root;
        dominantCount =0;
        helper(n);
        return dominantCount;
    }
};