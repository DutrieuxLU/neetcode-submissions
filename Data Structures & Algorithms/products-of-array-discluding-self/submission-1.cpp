class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre; pre.push_back(1);
        vector<int> pos; pos.push_back(1);

        for (int i = 0; i < nums.size(); i++) {
            pre.push_back(nums[i] * pre[i]);
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            pos.push_back(nums[i] * pos[pos.size() - 1]);
            cout << pos[i];
        }
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(pre[i] * pos[nums.size() - 1 - i]);
        }
        return res;
    }
};
