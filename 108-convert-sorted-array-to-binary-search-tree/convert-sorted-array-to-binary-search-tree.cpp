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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0,nums.size()-1);

        
    }
    private:
        TreeNode* convert(vector<int> &nums,int left,int right){
            if(left>right){
                return nullptr;
            }
            int m=left+(right-left)/2;
            TreeNode* node = new TreeNode(nums[m]);
            node->left=convert(nums,left,m-1);
            node->right=convert(nums,m+1,right);
            return node;
        }
};