/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findMax(vector<int> &A, int start, int end){
    int max = A[start];
    int index = start;
    for(int i = start; i <= end; i++){
        if(max < A[i]){
            max = A[i];
            index = i;
        }
    }
    return index;
} 

TreeNode* answer(vector<int> &A,int l,int r)
{
	if (l>r)
	{
		return NULL;
	}
	int maxi = findMax(A,l,r);
 	
 	TreeNode* root = new TreeNode(A[maxi]);
 	root->left = answer(A,l,maxi-1);
 	root->right = answer(A,maxi+1,r);

 	return root;

}

TreeNode* Solution::buildTree(vector<int> &A) {
	return answer(A, 0, A.size()-1);
}
