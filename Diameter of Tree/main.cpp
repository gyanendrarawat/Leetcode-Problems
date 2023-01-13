class Solution {
public:
    int diameter=0;
    int solve(TreeNode* root)
    {
        if(root==NULL) return 0;
        
        // checking left subtree
        int lsHeight=solve(root->left);
        // checking right subtree
        int rsHeight=solve(root->right);

        diameter=max(lsHeight+rsHeight,diameter);
        return 1+max(lsHeight,rsHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
       solve(root);
       return diameter;
    }
};
// Time complexity is O(n)
