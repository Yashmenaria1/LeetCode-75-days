class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> view;
        if (root) {
            queue<TreeNode*> level;
            level.push(root);

            while (!level.empty()) {
                view.push_back(level.back()->val);

                queue<TreeNode*> nextLevel;
                while (!level.empty()) {
                    TreeNode* node = level.front();
                    level.pop();

                    if (node->left) {
                        nextLevel.push(node->left);
                    }
                    if (node->right) {
                        nextLevel.push(node->right);
                    }
                }

                level = nextLevel;
            }
        }

        return view;
    }
};
