class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int last = matrix[0].size() - 1;
        int first =  0;


        int row ;        
        int l = 0, r = matrix.size() - 1;
        
        int mid;

        while( l <= r ){
            
            mid = (l + r) / 2;
            
            if(matrix[mid][0] == target )
                return 1;
            
            if(matrix[mid][first] <= target &&  target <= matrix[mid][last] ){
            
                row = mid;
                break;
            }

            if(matrix[mid][first] > target){

                r = mid -1;
            }
            else
                l = mid + 1;


        }

        l = 0, r = last;
        
        
        while(l <= r){
            mid = (l+r) / 2;
            if(matrix[row][mid] == target)
                return 1;
            if(matrix[row][mid] > target)
                r = mid-1;
            else
                l = mid + 1;
            
            
        }
        
        


        return 0;
        
    }
};