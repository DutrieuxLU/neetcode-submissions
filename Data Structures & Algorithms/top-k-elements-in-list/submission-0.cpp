class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> mm;
        for (const auto n : nums) {
            if (mm.find(n) != mm.end()) {
                mm[n]++;
            }
            else mm[n] = 1;
        }
        for (int i = 0; i < k; i++) {
            int greatest = 0;
            for (const auto n : nums) {
                if (mm[n] > mm[greatest]) {
                    greatest = n;
                }
            }
            res.push_back(greatest);
            mm[greatest] = -1;
        }
        return res;
    }
};
