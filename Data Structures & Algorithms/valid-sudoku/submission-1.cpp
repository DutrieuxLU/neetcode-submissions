class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int row[9] = {0};
        int col[9] = {0};
        int box[9] = {0};

        for (int i = 0; i < 81; i++) {
            int r = i / 9;
            int c = i % 9;
            char curr = board[r][c];
            if (curr == '.') continue;

            int d = curr - '1';
            int bit = 1 << d;

            int b = (r / 3) * 3 + (c / 3);

            if ((row[r] & bit) || (col[c] & bit) || (box[b] & bit)) {
                return false;
            }

            row[r] |= bit;
            col[c] |= bit;
            box[b] |= bit;
        } 
        return true;
    }
};
