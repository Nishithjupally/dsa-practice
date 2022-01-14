/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int mediani(std::vector<int> &v,int l,int r)
{
	int index = (l+r)/2;
	return index;
}

TreeNode* ans(std::vector<int> &v,int l,int r)
{
	if (l>r)
	{
		return NULL;
	}
	int mi = mediani(v,l,r);
	TreeNode* root = new TreeNode(v[mi]);
	root->left = ans(v,l,mi-1);
	root->right = ans(v,mi+1,r);
	return root;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
	return ans(A,0,A.size()-1);
}
