// Author: Mohamed Khedr

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
    vector<int> ans; 
    void postorder(TreeNode* curnode) {
        // check if the current node equal null
        if(curnode == nullptr) return;
        
        /*
        preorder is one of the traversing techniques in trees 
        involves visiting each of the nodes in the tree in the order (Root, Left, Right).
        */
        
        /*
        so we just store the value of current node 
        repeat the same operaion on the left, right subtrees
        */
        postorder(curnode -> left), postorder(curnode -> right);
        ans.push_back(curnode -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);      
        return ans;
    }
};