/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A,TreeNode* root)
{
	if (A == NULL)
	{
		return 0;
	}
	if (!root->left)
	{
		return 1+height(A->right,root);
	}
	else if(!root->right)
	{
		return 1+height(A->left,root);
	}
	else
	{
		return 1+min(height(A->left,root),height(A->right,root));
	}
} 
int Solution::maxDepth(TreeNode* A) {
	return height(A,A);
}
