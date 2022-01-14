/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A)
{
	if (A== NULL)
	{
		return 0;
	}
	else
	{
		return 1+max(height(A->right),height(A->left));
	}
}

int ans(TreeNode* root)
{
	int lh,rh;
	if (root == NULL)
	{
		return 1;
	}
	lh = height(root->left);
	rh = height(root->right);
	if (abs(lh-rh)<=1 && ans(root->left) && ans(root->right))
	{
		return 1;
	}
	return 0;

}
int Solution::isBalanced(TreeNode* A) {
	return ans(A);
}
