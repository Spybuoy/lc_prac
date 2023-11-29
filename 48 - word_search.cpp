class Solution {
public:
    bool search(vector<vector<char>>& board, const std::string &word,
    int i, int j, int index){
        if(index==word.length())return true;
        int m = board.size();
        int n = board[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[index]) {
            return false; // Out of bounds or mismatched character
        }
        char original = board[i][j];
        board[i][j] = '*'; // Mark the cell as visited
        bool result = search(board, word, i + 1, j, index + 1) ||
                search(board, word, i - 1, j, index + 1) ||
                search(board, word, i, j + 1, index + 1) ||
                search(board, word, i, j - 1, index + 1);
        board[i][j] = original; // Backtrack
        return result;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        int i, j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(search(board, word, i,j,0)) return true;
            }
        }
        return false;
    }
};