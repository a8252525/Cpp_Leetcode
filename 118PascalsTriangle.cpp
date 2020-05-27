class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        //if(numRows==0)return [[]];
        
        for(int i=0; i <numRows; i++){
            vector<int> tmp(i+1);
            tmp[0] = tmp[i] = 1;
            for(int j=1; j < i; j++){
                tmp[j] = pas[i-1][j-1]+pas[i-1][j];
            }
            pas.push_back(tmp);
        }
        return pas;
    }
};
