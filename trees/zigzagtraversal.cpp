/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void zig(TreeNode* A, bool fleft,int height,vector<vector<int> >&v)
{
	//std::vector<int> v1;
	if (A == NULL)
	{
		return;
	}
	if(v.size() < height){
        vector<int> temp;
        v.push_back(temp);
    }
	if (fleft)
	{
		v[height-1].push_back(A->val);
	}
	else
	{
		v[height-1].insert(v[height-1].begin(), A->val);
	}
	zig(A->left,!fleft,height+1,v);
	zig(A->right,!fleft,height+1,v);
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
	vector<vector<int> > v; 
	zig(A,true,1,v);
	return v;

}
