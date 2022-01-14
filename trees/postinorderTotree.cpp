/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* build2(std::vector<int> &in,std::vector<int> &post,int start,int end,int &ind,unordered_map<int, int>& mp)
{
	if (start>end)
	{
		return NULL;
	}
	int curr = post[ind--];
	TreeNode* root = new TreeNode(curr);
	if (start == end)
	{
		return root;
	}
	int indexi = mp[curr];
	root->right = build2(in,post,indexi+1,end,ind,mp);
	root->left = build2(in,post,start,indexi-1,ind,mp);
	return root;

}

TreeNode* build1(std::vector<int> &in,std::vector<int> &post,int len)
{
	unordered_map<int, int> mp; 
	for (int i = 0; i < len; i++) 
        mp[in[i]] = i; 
  
    int index = len - 1; // Index in postorder 
    return buildUtil(in, post, 0, len - 1,index,mp);

}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
	return build1(A,B,A.size());
}
