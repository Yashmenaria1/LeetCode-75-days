class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
       if( !root ) return NULL;
        if( root->val < key ) root->right = deleteNode(root->right, key);
        else if( root->val > key ) root->left = deleteNode(root->left, key);
        else{
            if( !root->right && !root->left ) return NULL;
            else if( !root->right ) return root->left;
            else if( !root->left ) return root->right;
            else{
                TreeNode* temp = root->right;
                while( temp->left ) temp = temp->left;
                temp->left = root->left;
                return root->right;
            }
        }
        return root;
           }
};
