// Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.

// Return the smallest level x such that the sum of all the values of nodes at level x is maximal.

// Approach
// Level Order Traversal
// Compute sum of node value at each level
// Check which level as max and return that level

// Solution
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int level = 1;
        int ansLevel = 1;
        int maxSum = root->val;

        while (!q.empty()) {
            int size = q.size();
            int sum = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (sum > maxSum) {
                maxSum = sum;
                ansLevel = level;
            }
            level++;
        }
        return ansLevel;
    }
};
