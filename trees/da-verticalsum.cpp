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
		return 0;
	}
	m[hd].push_back(root->key);
	verticaldis(root->left,hd-1,m);
	verticaldis(root->right,hd+1,m);
}

vector<vector<int> > ans(map<int,std::vector<int>> &m)
{
	std::vector<vector<int>> v;
	for(auto it = m.begin();it!=m.end();it++)
	{
		v.push_back(it->second);
	}
	return v;
}

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
	map<int,std::vector<int>> m;
	verticaldis(A,0,m);
	return ans(m);
}
