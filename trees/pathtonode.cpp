/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool path(TreeNode*A,int B,std::vector<int> &v)
{
	if (A == NULL)
	{
		return false;
	}
	v.push_back(A->val);
	if (A->val == B)
	{
		return true;
	}
	if (path(A->left,B,v)||path(A->right,B,v))
	{
		return true;
	}
	v.pop_back();
	return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
	std::vector<int> v;
	bool x = path(A,B,v);
	return v;
}
