class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> colRows;

        for(int i =0;i<matrix.size(); i++){
                
            for(int j =0;j<matrix[i].size(); j++){
                colRows.push_back(matrix[i][j]);

                
            }

        }

        int l =0, r = colRows.size() - 1;

        while( l <= r ){
            int mid = (l + r) / 2;

            if(colRows[mid] == target)
                return 1;

            if(colRows[mid] > target){
                r = mid -1;
            }
            else
            l = mid + 1;


        }


        return 0;
        
    }
};