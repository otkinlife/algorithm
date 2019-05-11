//
// Created by 贾凯超 on 2019/5/10.
//

#ifndef TASKS_LEETCODE_169_061_H
#define TASKS_LEETCODE_169_061_H

#endif //TASKS_LEETCODE_169_061_H
class Solution {
public:
    //#169 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
    //你可以假设数组是非空的，并且给定的数组总是存在众数。
    //思考：如果有众数，那么众数一定在排序数组的中间位置
    int majorityElement(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() >> 1];
    }
};