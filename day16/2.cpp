// Problem:Given a row-wise sorted matrix where the number of rows and columns is always odd, find the median of the matrix.

// Code:
class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int rows=mat.size();
        int cols=mat[0].size();
        int minVAL=INT_MAX,maxVAL=INT_MIN;
        for (int i = 0; i < rows; i++) {
            minVAL = min(minVAL, mat[i][0]);  
            maxVAL = max(maxVAL, mat[i][cols - 1]);
        }
        int med=(rows*cols+1)/2;
        while(minVAL<maxVAL){
            int mid=(minVAL+maxVAL)/2;
            int pos=0;
            for(int i=0;i<rows;i++){
                pos+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            if(pos<med){
                minVAL=mid+1;
            }
            else{
                maxVAL=mid;
            }
        }
        return minVAL;
    }
};

// TC:O(nlogm)
// SC:O(1)
