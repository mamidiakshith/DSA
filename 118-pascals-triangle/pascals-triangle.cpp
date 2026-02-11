class Solution {
public:
    vector<int> rowgen(int n){
        long long res=1;
        vector<int>ans;
        ans.push_back(1);
        for(int col=1;col<n;col++){
            res=res*(n-col);
            res=res/col;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=1;i<=numRows;i++){
            vector<int>temp=rowgen(i);
            v.push_back(temp);
        }
        return v;
    }
};