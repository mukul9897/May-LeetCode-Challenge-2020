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
    int count=0,result=0;
    int kthSmallest(TreeNode* root, int k){
        int n=printInorder(root,k,count,result);
        return n;
    }
    int printInorder(struct TreeNode *root,int k,int &count,int &result){
	      if(root->left) printInorder(root->left,k,count,result);
	      count++;
	      if(count==k) 
            result=root->val;
        // cout<<root->val<<" ";
	      if(root->right) printInorder(root->right,k,count,result);
           return result;
	    }
 };
