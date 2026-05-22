class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // run through the vector, each time checking against a map. map is string -> idx
        // in result vector. 

        map<string, int> mm;
        vector<vector<string>> res;

        for (const auto str : strs) {
            auto t = str;
            sort(t.begin(), t.end());
            if (mm.find(t) != mm.end()) {
                res[mm[t]].push_back(str);
            } else {
                mm[t] = res.size();
                res.push_back({str});
            }
        }
        return res;
    }
};
