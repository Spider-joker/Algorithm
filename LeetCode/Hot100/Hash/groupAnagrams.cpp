/*
给你一个字符串数组，请你将字母异位词组合在一起。
可以按任意顺序返回结果列表。
*/
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> hsTbl;
        for (const auto &str : strs)
        {
            string s = str;
            sort(s.begin(), s.end());
            hsTbl[s].emplace_back(str);
        }
        vector<vector<string>> res;
        for (const auto &it : hsTbl)
        {
            res.emplace_back(it.second);
        }
        return res;
    }
};
int main(){
    return 0;
}