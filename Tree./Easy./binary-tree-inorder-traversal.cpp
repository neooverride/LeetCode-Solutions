// binary-tree-inorder-traversal.
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inOrderTraversalHelper(root, result);
        return result;
    }

private:
    void inOrderTraversalHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }

        inOrderTraversalHelper(node->left, result);
        result.push_back(node->val);
        inOrderTraversalHelper(node->right, result);
    }
};
