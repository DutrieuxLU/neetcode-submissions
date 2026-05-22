class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>mm;

        for (int i = 0; i < numbers.size(); i++) {
            if (mm.find(target - numbers[i]) != mm.end()) {
                return {mm[target-numbers[i]] + 1, i + 1};
            }
            else {
                mm[numbers[i]] = i;
            }
        }
        return {};
    }
};
