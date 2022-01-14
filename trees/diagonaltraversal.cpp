/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void verticaldis(TreeNode* root,int hd,map<int,std::vector<int>> &m)
{
	if (root == NULL)
	{
		return ;
	}
	m[hd].push_back(root->val);
	verticaldis(root->left,hd-1,m);
	verticaldis(root->right,hd,m);
}

vector<int> ans(map<int,std::vector<int>> &m)
{
	vector<int> v;
	for(auto it = m.rbegin();it!=m.rend();it++)
	{
		v.insert(v.end(),it->second.begin(),it->second.end());
	}
	return v;
}


vector<int> Solution::solve(TreeNode* A) {
	map<int,std::vector<int>> m;
	verticaldis(A,0,m);
	return ans(m);
}
