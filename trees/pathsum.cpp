/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int found(TreeNode* A,int sum)
{
	if (A == NULL)
	{
		return 0;
	}
	if (A->val == sum && A->left==NULL && A->right == NULL)
	{
		return 1;
	}
	return found(A->left,sum-(A->val))||found(A->right,sum-(A->val));
}

int Solution::hasPathSum(TreeNode* A, int B) {
	return found(A,B);
}
