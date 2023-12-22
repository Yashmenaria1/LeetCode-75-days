class Solution {
public:
  int pathSum(TreeNode* root, int sum) {
    if (root == nullptr)
      return 0;
    return dfs(root, static_cast<long long>(sum)) +
           pathSum(root->left, sum) +
           pathSum(root->right, sum);
  }

private:
  int dfs(TreeNode* root, long long sum) {
    if (root == nullptr)
      return 0;
    return (sum == root->val ? 1 : 0) +
           dfs(root->left, sum - root->val) +
           dfs(root->right, sum - root->val);
  }
};
