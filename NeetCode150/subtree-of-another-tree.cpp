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
    bool dfs(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) return true;
        if (subRoot == nullptr) return false;
        if (root == nullptr) return false;

        if (root->val != subRoot->val)  {
            return false;
        }

        return dfs(root->left, subRoot->left) &&
            dfs(root->right, subRoot->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // if found subRoot start checking for match
        if (root == nullptr) return false;

        if (dfs(root, subRoot)) return true;

        // compare right and left subtree to SubRoot
        return isSubtree(root->left, subRoot) ||
            isSubtree(root->right, subRoot);
    }
};
