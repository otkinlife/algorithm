//
// Created by 贾凯超 on 2019/5/10.
//

#ifndef TASKS_LEETCODE_746_061_H
#define TASKS_LEETCODE_746_061_H

#endif //TASKS_LEETCODE_746_061_H

class Solution {
public:
    //#746 数组的每个索引做为一个阶梯，第 i个阶梯对应着一个非负数的体力花费值 cost[i](索引从0开始)。
    //每当你爬上一个阶梯你都要花费对应的体力花费值，然后你可以选择继续爬一个阶梯或者爬两个阶梯。
    //您需要找到达到楼层顶部的最低花费。在开始时，你可以选择从索引为 0 或 1 的元素作为初始阶梯。
    //思考：该题与爬楼梯类似，但需要比较爬一阶和爬两阶的耗费。递推公式为f(n) = min(f(n - 1), f(n -2)) + cost[n]
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() < 2) return 0;
        if (cost.size() == 2) return min(cost[0], cost[1]);
        int n = cost.size() - 1;

        for (int i = 2; i <= n; i++) {
            cost[i] += min(cost[i - 1], cost[i - 2]);
        }
        return min(cost[n - 1], cost[n]);
    }
};