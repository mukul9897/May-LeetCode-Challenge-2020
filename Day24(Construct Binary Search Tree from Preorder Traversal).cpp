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
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode *root=new TreeNode(pre[0]);
        vector<int> left_n;
        vector<int> right_n;
        if(pre.size()==0) 
            return nullptr;
        if(pre.size()==1) 
            return root;
        for(int n: pre){
            if(n<pre[0]) 
                left_n.push_back(n);
            else if(n>pre[0]) 
                right_n.push_back(n);
        }
        root->left=bstFromPreorder(left_n);
        root->right=bstFromPreorder(right_n);
        return root;
    }
};
