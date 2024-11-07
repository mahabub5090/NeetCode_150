// Problem Link: https://leetcode.com/problems/valid-sudoku/description/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,set<char>>rows,cols,squares;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                char val=board[i][j];
                int id=(i/3)*3+j/3;
                if(rows[i].count(val)||cols[j].count(val)||squares[id].count(val))return 0;
                rows[i].insert(val);
                cols[j].insert(val);
                squares[id].insert(val);
            }
        }   
        return 1;
    }
};

// Time Complexity : O(N^2);
// Space Complexity: O(3*N^2) => O(1); // cause,max(N)==281;