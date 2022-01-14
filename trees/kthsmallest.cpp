/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* root, int& smallest, int k, int& it)
{
    if (!root)
        return;
    inorder(root->left, smallest, k, it);
    ++it;
    if (it == k)
    {
        smallest = root->val;
        return;
    }
    inorder(root->right, smallest, k, it);
}
int Solution::kthsmallest(TreeNode* root, int k) {
    int smallest = -1;
    int it = 0;
    inorder(root, smallest, k, it);
    return smallest;
}

int kthsmallestRes(TreeNode *root, int k, int &current) {
    if(root->left != NULL) {
        int res = kthsmallestRes(root->left, k, current);        
        if(current == k)
            return res;
    }
    ++current;
    if(current == k)
        return root->val;

    if(root->right != NULL) {
        int res = kthsmallestRes(root->right, k, current);        
        if(current == k)
            return res;
    }    
} 

int Solution::kthsmallest(TreeNode* root, int k) {
    int level = 0;
    return kthsmallestRes(root, k, level);
    
}

