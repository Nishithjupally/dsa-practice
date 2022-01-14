/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* ans(TreeNode* root)
{
	if(root == NULL)
	{
		return NULL:
	}
	root->left  = ans(root->left); 
    root->right = ans(root->right); 

    if (root->left==NULL && root->right==NULL) 
        return root; 

	if (root->left==NULL) 
    { 
        struct node *new_root = root->right; 
        free(root); // To avoid memory leak 
        return new_root; 
    } 
  
  
    /* if current nodes is a half node with right 
       child NULL right, then it's right child is 
       returned and replaces it in the given tree  */
    if (root->right==NULL) 
    { 
        struct node *new_root = root->left; 
        free(root); // To avoid memory leak 
        return new_root; 
    } 
  
    return root; 

}

TreeNode* Solution::solve(TreeNode* A) {
	return ans(A);
}
