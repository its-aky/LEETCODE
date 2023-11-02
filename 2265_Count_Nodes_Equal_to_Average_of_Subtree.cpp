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

    int count=0;

    pair<int,int> helper(TreeNode* root){
        if(!root)return {0,0};

        auto lh=helper(root->left);
        auto rh=helper(root->right);

        int sum=lh.first+rh.first+root->val;
        int ele=lh.second+rh.second+1;
        if(sum/ele==root->val){
            count++;
        }

        return {sum,ele};
    }

    int averageOfSubtree(TreeNode* root) {

        helper(root);
        return count;

        
    }
};