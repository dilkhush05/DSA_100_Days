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
private:
    pair<bool, int> isBalancedHelper(TreeNode* root) {
        if (root == nullptr) {
            return {true, 0}; 
        }

        auto left = isBalancedHelper(root->left);
        auto right = isBalancedHelper(root->right);

        bool balanced = left.first && right.first && (std::abs(left.second - right. second) <= 1);
        int height = std::max(left.second, right.second) + 1;

        return {balanced, height};
    }

public:
    bool isBalanced(TreeNode* root) {
        return isBalancedHelper(root).first;
    }
};