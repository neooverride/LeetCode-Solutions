// binary-tree-postorder-traversal.
class Solution {
private:
    // Helper function for Post-Order traversal
    void postOrder(TreeNode* node, vector<int>& result) {
        if (node == nullptr)
            return;

        // Traverse the left subtree
        postOrder(node->left, result);

        // Traverse the right subtree
        postOrder(node->right, result);

        // Visit the current node (Root)
        result.push_back(node->val);
    }

public:
    // Main function to return the post-order traversal as a vector
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postOrder(root, result);
        return result;
    }
};
