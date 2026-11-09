/*
给定一个数组 nums ，
编写一个函数将所有 0 移动到数组的末尾，
同时保持非零元素的相对顺序。
请注意 ，必须在不复制数组的情况下原地对数组进行操作。
*/
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto slow = nums.begin();
        auto fast = nums.begin();
        while (true)
        {
            if(fast < nums.end() && *fast != 0){
                *slow++ = *fast++;
            }else if(fast < nums.end()){
                ++fast;
            }else if(slow < nums.end()){
                *slow++ = 0;
            }else{
                break;
            }
        }
    }
};