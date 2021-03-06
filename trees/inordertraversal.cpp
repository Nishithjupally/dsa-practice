/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* A, std::vector<int> &v)
{
	stack<TreeNode*> s;
	TreeNode* curr= A;
	while(curr != NULL || s.empty() == false)
	{
		while(curr != NULL)
		{
			s.push(curr); 
	        curr = curr->left; 
		}
		curr = s.top();
		s.pop();
		v.push_back(curr->val);
		curr = curr->right;
    }
}

vector<int> Solution::inorderTraversal(TreeNode* A) {
	std::vector<int> v;
	inorder(A,v);
	return v;
}

vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> sol;
    stack<TreeNode*> st;
    
    TreeNode* curr = A;
    bool done = 0;
    
    while(!done){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            if(!st.empty()){
                curr = st.top();
                int val = curr->val;
                sol.push_back(val);
                curr = curr->right;
                st.pop();
            }
            else{
                done = 1;
            }
        }
    }
    
    return sol;
}