/*
给定一个未排序的整数数组nums，
找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。
请你设计并实现时间复杂度为 O(n) 的算法解决此问题
*/
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
        int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ump(nums.begin(),nums.end());
        int res = 0;
        for(const auto& it : ump){
            if(ump.find(it - 1) != ump.end())
                continue;
            int t = it + 1;
            while(ump.find(t)!=ump.end()){
                ++t;
            }
            res = max(res,t-it);
        }
        return res;
    }
};