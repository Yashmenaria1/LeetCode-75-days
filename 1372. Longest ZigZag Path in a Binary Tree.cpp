class Solution {
public:
    int result = 0;

    void ans(TreeNode* node, bool leftSide, int currLen) {
        if (!node) return;
        result = max(result, currLen);
        if ( leftSide) {
            ans(node->left, false, currLen + 1);
            ans(node->right, true, 1);
        } 
        else {
            ans(node->right, true, currLen + 1);
            ans(node->left, false, 1);
        }
    }

    int longestZigZag(TreeNode* root) {
        ans(root, true, 0);
        ans(root, false, 0);
        return result;
    }
};
