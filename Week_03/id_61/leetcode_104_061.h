//
// Created by 贾凯超 on 2019/5/4.
//

#ifndef TASKS_LEETCODE_104_061_H
#define TASKS_LEETCODE_104_061_H

#endif //TASKS_LEETCODE_104_061_H

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
    //#104 给定一个二叉树，找出其最大深度。
    //二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
    //说明: 叶子节点是指没有子节点的节点。
    //思考：二叉树递归实现，递推公式：f(root) = max(f(root->left), f(root->right)) + 1;
    int maxDepth(TreeNode* root) {
        int left = 0, right = 0;
        if (!root) return 0;
        if (root->left) {
            left = maxDepth(root->left);
        }
        if (root->right) {
            right = maxDepth(root->right);
        }
        return max(left, right) + 1;
    }
};