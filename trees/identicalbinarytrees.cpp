/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
	if (!A || !B)
	{
		return A==B;
	}
	if (A->val != B->val)
	{
		return 0;
	}
	return Solution::isSameTree(A->left,B->left)&&Solution::isSameTree(A->right,B->right);
}
