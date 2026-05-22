class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for (const auto str : strs) {
            string t = to_string(str.size());
            res = res + t + str;
        }
        cout << res;
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int t = stoi(s[i]);
            string curr = "";
            for (int j = i+1; j < i + t; j++) {
                curr = curr + to_string(s[j]);
            }
            res.push_back(curr);
            i = t + 1;
        }
        return res;
    }
};
