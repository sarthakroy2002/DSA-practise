class Solution {
public:
    int maxDepth(TreeNode* root) {

        // Base Case: if the given tree has No elements left
        if(root == nullptr)
        {
            return 0;
        }

        // Recursive call: giving recursive call to get the height from the nodes
        int right = maxDepth(root-> right);
        int left = maxDepth(root -> left);

        // small work: returning +1 to the max of the node we get from the recursive call
        // after all the recursive call is over then at the end will return the total sum to main function
        return max(right,left) + 1;
    }
};
