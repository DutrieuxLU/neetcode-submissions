class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (int r = 0; r < 9; r++) {
            unordered_map<char, bool>cm;
            unordered_map<char, bool>rm;
            unordered_map<char, bool>bm;
            for (int c = 0; c < 9; c++) {
                int by = r % 3;
                int bx = c % 3;
                if (board[r][c] == '.') continue;
                if (cm.find(board[r][c]) != cm.end() 
                || rm.find(board[c][r]) != cm.end()
                || bm.find(board[by][bx]) != cm.end()) {
                    return false;
                } else {
                    cm[board[r][c]] = true;
                    rm[board[c][r]] = true;
                    bm[board[by][bx]] = true;
                }
            }
        }
        return true;
    }
};
