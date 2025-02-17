class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0, r = rows -1;

        while(l<=r){

            int m =  l + (r-l) /2;

            if(matrix[m][0]<= target && target <= matrix[m][cols-1] ){
                
                return binarySearch(matrix[m], target);
            }
            else if (matrix[m][0] > target ||   matrix[m][cols-1] > target){
                r = m -1;
            }
            else{
                l = m +1;
            }
        }

        return 0;

    }

    
    bool binarySearch(vector<int>&row, int target){
        int n = row.size();

        int l = 0;
        int r = n -1;

        while(l<=r){
            
            int m  = l +(r-l) /2 ;
            if(row[m] == target)
                return 1;
            if(target > row[m]){
                l = m +1;
            }
            else{
                r = m - 1;
            }


        }

        return 0;


    }
};