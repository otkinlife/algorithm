//
// Created by 贾凯超 on 2019/5/4.
//

#ifndef TASKS_LEETCODE_703_061_H
#define TASKS_LEETCODE_703_061_H

#endif //TASKS_LEETCODE_703_061_H
/**
 * #703 设计一个找到数据流中第K大元素的类（class）。注意是排序后的第K大元素，不是第K个不同的元素。
 * 思考，可以用二分法实现，也可以维护一个大小为k的小顶堆。top即为第k大
 */
class KthLargest {
private:
    int k;
    //c++ stl库小顶堆基于优先队列实现
    priority_queue <int ,vector<int>, greater<int>> heap;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int i : nums) {
            add(i);
        }
    }
    //新增一个元素，并维护一个小顶堆
    int add(int val) {
        if (this->heap.size() < k) {
            this->heap.push(val);
        } else if (this->heap.top() < val) {
            this->heap.pop();
            this->heap.push(val);
        }
        return this->heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */