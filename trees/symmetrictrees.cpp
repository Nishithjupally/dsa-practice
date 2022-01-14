/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int mirror(TreeNode* A,TreeNode* B)
{
	if (!A && !B)
	{
		return 1;
	}
	if (A && B && A->val == B->val)
	{
		return mirror(A->left,B->right)&&mirror(A->right,B->left);
	}
	return 0;
}
int Solution::isSymmetric(TreeNode* A) {
	return mirror(A,A);
}
