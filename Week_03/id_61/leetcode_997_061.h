//
// Created by 贾凯超 on 2019/5/4.
//

#ifndef TASKS_LEETCODE_997_061_H
#define TASKS_LEETCODE_997_061_H

#endif //TASKS_LEETCODE_997_061_H

class Solution {
public:
    //#997 在一个小镇里，按从 1 到 N 标记了 N 个人。传言称，这些人中有一个是小镇上的秘密法官。
    //如果小镇的法官真的存在，那么：
    //小镇的法官不相信任何人。
    //每个人（除了小镇法官外）都信任小镇的法官。
    //只有一个人同时满足属性 1 和属性 2 。
    //给定数组 trust，该数组由信任对 trust[i] = [a, b] 组成，表示标记为 a 的人信任标记为 b 的人。
    //如果小镇存在秘密法官并且可以确定他的身份，请返回该法官的标记。否则，返回 -1。
    //思考：该题目的图比较简单，只要记录出度和入度即可。出度为0的有可能是法官。检查出度为0的人的入度是否是N-1;
    int findJudge(int N, vector<vector<int>>& trust) {
        //出度
        vector<int> out(N + 1, 0);
        //入度
        vector<int> in(N + 1, 0);
        //初始化
        for (int i = 0; i < trust.size(); i++) {
            out[trust[i][0]]++;
        }
        for (int i = 0; i < trust.size(); i++) {
            in[trust[i][1]]++;
        }
        //法官候选人应该是出度为0的人
        for (int m = 1; m < out.size(); m++) {
            if (out[m] != 0) {
                continue;
            }
            //检测是否被所有人信任,入度为N-1即可
            if (in[m] == N - 1) {
                return m;
            }
        }
        return -1;
    }
};