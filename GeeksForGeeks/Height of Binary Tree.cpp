class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(Node* root) {
    // Base case: If the tree is empty, return 0
    if (root == NULL) {
        return 0;
    }
    
    // Recursive case: Find the height of the left and right subtrees
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    // Return the maximum of the left and right subtree heights, plus 1 for the current node
    return max(leftHeight, rightHeight) + 1;
  }
};
