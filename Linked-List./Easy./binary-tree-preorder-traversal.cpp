// binary-tree-preorder-traversal.
class Solution {
private:
    // Helper function for Pre-Order traversal
    void preOrder(TreeNode* node, vector<int>& result) {
        if (node == nullptr)
            return;

        // Visit the current node (Root)
        result.push_back(node->val);

        // Traverse the left subtree
        preOrder(node->left, result);

        // Traverse the right subtree
        preOrder(node->right, result);
    }

public:
    // Main function to return the pre-order traversal as a vector
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preOrder(root, result);
        return result;
    }
};
