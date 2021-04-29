/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
    int depth = 0;
        if (root == NULL) {
            return 0;   //test case when the root NULL
    }
    depth++;
        if((root -> right != NULL) && (root -> left != NULL)) {
            //add the max depth when both left and right contain values
            depth += max(maxDepth(root -> left),maxDepth(root -> right));
        }   else if(root -> left != NULL) {
            depth += maxDepth(root -> left);
        }   else if (root -> right != NULL) {
            depth += maxDepth(root -> right);
        } 
      
        return depth;
    }
};