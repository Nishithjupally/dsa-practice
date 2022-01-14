/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* invert(TreeNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	invert(root->left);
	invert(root->right);
	swap((root->left),(root->right));
	return root;

}
TreeNode* Solution::invertTree(TreeNode* A) {
	return invert(A);
}
