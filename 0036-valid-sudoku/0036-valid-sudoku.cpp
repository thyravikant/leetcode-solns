class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check each row
        for(int row=0;row<9;row++){
            unordered_set<char> seen;
            for(int i=0;i<9;i++){
                if(board[row][i]=='.')
                continue;
                if(seen.count(board[row][i]))
                return false;
                seen.insert(board[row][i]);
            }
        }
        //check each column
        for(int c=0;c<9;c++){
            unordered_set<char> seen;
            for(int i=0;i<9;i++){
                if(board[i][c]=='.')
                continue;
                if(seen.count(board[i][c]))
                return false;
                seen.insert(board[i][c]);
            }
        }
        //check each 3x3 square boxes
        for(int s=0;s<9;s++){
            unordered_set<char>seen;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row=(s/3)*3+i;
                    int col=(s%3)*3+j;
                    if (board[row][col] == '.') 
                    continue;
                    if (seen.count(board[row][col])) 
                    return false;
                    seen.insert(board[row][col]);
                }
            }
    }
    return true;

    }
};

    