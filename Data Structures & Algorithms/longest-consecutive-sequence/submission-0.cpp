class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mm;
        int max_s = INT_MIN;
        int min_s = INT_MAX;

        for (const auto n : nums) {
            max_s = max(max_s, n);
            min_s = min(min_s, n);
            mm[n] = true;
        }
        int streak = 1;
        int maxStreak = 0;
        for (int i = min_s; i <= max_s; i++ ) {
            if (mm[i] && mm[i-1]) streak++;
            else {
                maxStreak = max(maxStreak, streak);
                streak = 1;
            }
        }
        maxStreak = max(maxStreak, streak);
        return maxStreak;

    }
};
