#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i];

        if (seen.find(needed) != seen.end()) {
            return {seen[needed], i};
        }

        seen[nums[i]] = i;
    }

    return {};
}


int main() {
    vector<int> nums = {3 ,3};
    int target = 6;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}