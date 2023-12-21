class Solution {
public:
    int good;

    int goodNodes(TreeNode* root) {
        good = 0;
        cal(root, INT_MIN);
        return good;
    }

    void cal(TreeNode* root, int max) {
        if (root == NULL) return;
        if (root->val >= max) {
            good++;
            max = root->val;
        }
        cal(root->left, max);
        cal(root->right, max);
    }
};
