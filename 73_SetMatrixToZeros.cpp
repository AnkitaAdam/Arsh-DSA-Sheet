class Solution {
public:
    void setRowAndCol(vector<pair<int,int>>&rowswithzeros,vector<vector<int>>&matrix){
        for(int k=0;k<rowswithzeros.size();k++){
            for(int i=0;i<matrix.size();i++){
                int col=rowswithzeros[k].second;
                matrix[i][col]=0;
            }

            for(int j=0;j<matrix[0].size();j++){
                int row=rowswithzeros[k].first;
                matrix[row][j]=0;
            }
        }
        
    }

    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>rowswithzeros;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    rowswithzeros.push_back(make_pair(i,j));
                }
            }
        }
        setRowAndCol(rowswithzeros,matrix);
    }
};