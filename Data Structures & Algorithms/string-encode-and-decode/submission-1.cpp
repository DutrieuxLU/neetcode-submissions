class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (const auto str : strs) {
            string s = str;
            string t = to_string(s.size()) + "#";
            res.append(t);
            res.append(s);
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int length = stoi(s.substr(i, j - i));
            res.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }
        return res;
    }
};
