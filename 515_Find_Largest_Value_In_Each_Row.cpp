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

    vector<int> finalans;

    void helper(TreeNode* root){

        if(!root)return;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int ans=INT_MIN;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                ans=max(ans,temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }

            finalans.push_back(ans);
        }

    }

    vector<int> largestValues(TreeNode* root) {
        helper(root);
        return finalans;

        
    }
};