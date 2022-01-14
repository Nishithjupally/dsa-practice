void postorder(TreeNode* A, std::vector<int> &v)
{
	stack<TreeNode*> s;
	TreeNode* curr= A;
	while(curr != NULL || s.empty() == false)
	{
		while(curr != NULL)
		{
			s.push(curr);
			v.push_back(curr->val); 
	        curr = curr->left; 
		}
		curr = s.top();
		s.pop();
		
		curr = curr->right;
    }
}

// vector<int> Solution::inorderTraversal(TreeNode* A) {
// 	std::vector<int> v;
// 	inorder(A,v);
// 	return v;
// }

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
	std::vector<int> v;
	postorder(A,v);
	return v;
}
