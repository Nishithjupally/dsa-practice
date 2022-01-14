/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findIndex(vector<int> &inorder, int i, int j, int val)
{
    for (auto b = i; b<=j; ++b)
        if (inorder[b]==val)
            return b;
}

TreeNode* tree(vector<int> &pre, vector<int> &in,int i,int j,int &ind)
{
	if(i>j)
		return NULL;
	TreeNode* root = new TreeNode(pre[ind++]);
	if (i==j)
	{
		return root;
	}
	int temp = findIndex(in,i,j,node->val);
	root->left = tree(pre,in,i,temp-1,ind);
	root->right = tree(pre,in,temp+1,j,ind);
	return root;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
	if (A.size()==0 || B.size()==0)
	{
		return NULL;
	}
	int x = 0;
	return tree(A,B,0,A.size()-1,x);
}
