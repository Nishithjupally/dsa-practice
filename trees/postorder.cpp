/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(TreeNode* A, std::vector<int> &v)
{
    stack<TreeNode*> s;
    TreeNode* curr= A;
    TreeNode* temp;
    while(curr != NULL || s.empty() == false)
    {
        if (curr == NULL)
        {
            temp = s.top();
            curr = temp->right;
            if (curr == NULL)
            {
                v.push_back(temp->val);
                s.pop();
            
                if (s.empty()==true)
                {
                    return;
                }
                curr = s.top();
                while(curr->right == temp)
                {
                    temp = curr;
                        v.push_back(curr->val);
                        s.pop();
                        if(s.empty()){
                            return ;
                        }
                        curr = s.top();
                }
                curr = curr->right;
           }
        }
        else
        {
            s.push(curr);
            curr = curr->left;
        }
    }
}

vector<int> Solution::postorderTraversal(TreeNode* A) {
    std::vector<int> v;
    postorder(A,v);
    return v;
}

//2
void postOrderIterative(Node* root) 
{ 
    if (root == NULL) 
        return; 
  
    // Create two stacks 
    stack<Node *> s1, s2; 
  
    // push root to first stack 
    s1.push(root); 
    Node* node; 
  
    // Run while first stack is not empty 
    while (!s1.empty()) { 
        // Pop an item from s1 and push it to s2 
        node = s1.top(); 
        s1.pop(); 
        s2.push(node); 
  
        // Push left and right children 
        // of removed item to s1 
        if (node->left) 
            s1.push(node->left); 
        if (node->right) 
            s1.push(node->right); 
    } 
  
    // Print all elements of second stack 
    while (!s2.empty()) { 
        node = s2.top(); 
        s2.pop(); 
        cout << node->data << " "; 
    } 
} 