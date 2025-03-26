/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Traversal_solve(TreeNode* node , vector<int>& v)
    {
         
        if(node== NULL)
        {
            return ; 
        }
        v.push_back(node->val);
        Traversal_solve(node->left , v);
        Traversal_solve(node->right,v );
    }
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v ;
        Traversal_solve(root , v);
        return v ;
    }
};