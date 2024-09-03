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
    // Write searchBST using recursion
    TreeNode* searchBST(TreeNode* root, int val) {
        //Base case when we found the value, return root
        if (root == nullptr || root->val == val) {
            return root;
        }
        //When the val is smaller than root's value, search left subtree
        if (val < root->val) {
            return searchBST(root->left, val);
        }
        //When the val is smaller than root's value, search righ subtree
        else {
            return searchBST(root->right, val);
        }
    }
};
