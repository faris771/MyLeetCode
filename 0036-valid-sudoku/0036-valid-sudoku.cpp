#define pb push_back
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //  5 : [<0,0>, <1,5>]
        unordered_map<int,unordered_set<char>> rows;
        unordered_map<int,unordered_set<char>> cols;
        map<pair<int,int>,unordered_set<char>> threes;
        
        for(int i =0;i<9;i++) {
            for(int j =0;j<9;j++) {
                if(board[i][j] =='.') continue;
                if(rows[i].insert(board[i][j]).second == 0 || cols[j].insert(board[i][j]).second == 0 ||
                    threes[{i/3,j/3}].insert(board[i][j]).second == 0){
                    return false;
                }
            
            
            }
            
            
        }
        
        
        return true;
    }
};