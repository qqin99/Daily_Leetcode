/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int counter=0;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* LCA= LCA_helper(root, p, q);
        
        if(counter==2) {
            return LCA;
        }else {
            return NULL;
        }
    }
​
    TreeNode* LCA_helper(TreeNode* root, TreeNode* p, TreeNode* q){
        // in V1, we instantly returned the p / q when we sees it for the base case here.
        if (root==NULL) return root;
        /*
         why we need to recursion downward?  Find the p and q !
        */
        // This is for finding p and q node!!!! Not for finding the LCA !!!
        TreeNode* left=LCA_helper(root->left,p,q);
        TreeNode* right=LCA_helper(root->right,p,q);
        // Find p or q, 
       // Once we found either one, we will have  to update counter
        if(root == p || root == q) {
            counter++;
            return root;
        }
        
        if(left!=NULL && right != NULL) {  // left side and right side both found targets
            return root;
        }else if(left==NULL) {
            return right;
        }else {
            return left;
        }
    }
        
};
