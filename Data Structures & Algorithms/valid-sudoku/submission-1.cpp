class Solution {
public:
    bool validate(vector<vector<char>>& board, int sr, int sc, int er, int ec) {
        unordered_set<char> st;

        for (int i = sr; i < er; i++) {
            for (int j = sc; j < ec; j++) {
                if (board[i][j] == '.')
                    continue;

                if (st.find(board[i][j]) != st.end())
                    return false;

                st.insert(board[i][j]);
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        // Validate rows
        for (int row = 0; row < n; row++) {
            unordered_set<char> st;

            for (int col = 0; col < n; col++) {
                if (board[row][col] == '.')
                    continue;

                if (st.find(board[row][col]) != st.end())
                    return false;

                st.insert(board[row][col]);
            }
        }

        // Validate columns
        for (int col = 0; col < n; col++) {
            unordered_set<char> st;

            for (int row = 0; row < n; row++) {
                if (board[row][col] == '.')
                    continue;

                if (st.find(board[row][col]) != st.end())
                    return false;

                st.insert(board[row][col]);
            }
        }

        // Validate each 3x3 subgrid
        for (int sr = 0; sr < n; sr += 3) {
            for (int sc = 0; sc < n; sc += 3) {
                if (!validate(board, sr, sc, sr + 3, sc + 3))
                    return false;
            }
        }

        return true;
    }
};