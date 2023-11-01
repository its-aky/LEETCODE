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

    map<int,int> m;
    void helper(TreeNode* root){
        if(!root)return;
        m[root->val]++;
        helper(root->left);
        helper(root->right);
    }

    vector<int> findMode(TreeNode* root) {

        helper(root);

        int mode=INT_MIN;
        for(auto it:m){
            mode=max(mode,it.second);
        }

        vector<int> ans;
        for(auto it:m){
            if(it.second==mode){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};