/*
给定一个长度为 n 的整数数组 height 。
有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i]) 。
找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
返回容器可以储存的最大水量。
说明：你不能倾斜容器。
*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int maxarea = 0;
        int curarea = 0;
        auto left = height.begin();
        auto right = left + height.size() - 1;
        while(left < right){
            ++i;
            int minheight;
            if(*left < *right)
                minheight = *left++;
            else
                minheight = *right--;
            curarea = static_cast<int>( right - left + 1) * minheight;
            maxarea = max(maxarea,curarea);
            cout <<"第" << i << "轮 : cur" << curarea << ", max" << maxarea << endl;
        }
        return maxarea;
    }
};
int main(){
    vector<int> nums = {
        1,8,6,2,5,4,8,3,7
    };
    Solution s;
    s.maxArea(nums);
    return 0;
}