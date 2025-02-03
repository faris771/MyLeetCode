class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        map<pair<int,int>,unordered_set<int>> sub_boxes;


        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] =='.'){
                    continue;
                }

                if( (rows[i].insert(board[i][j]).second == 0 ) || \
                (cols[j].insert(board[i][j]).second == 0  ) || \
                (sub_boxes[{i/3,j/3}].insert(board[i][j]).second == 0  )) {
                    return false;
                }


            }

        }



        return true;

    }



};