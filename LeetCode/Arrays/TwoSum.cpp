#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;
            for (int i = 0; i < nums.size(); i++) {
                int current = nums[i];
                int x = target - current;
                if (map.find(x) != map.end()) {
                    return {map[x], i};
            }
                map[current] = i;
            }
            return {};
        }
};
