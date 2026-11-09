/*
给定一个整数数组 nums 和一个整数目标值 target，
请你在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。
*/
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hsTbl;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            auto it = hsTbl.find(target - nums[i]);
            if(it != hsTbl.end()){
                return {static_cast<int>(i),it->second};
            }
            hsTbl.insert({nums[i],i});
        }
        return {};
    };
};
int main(){
    return 0;
}