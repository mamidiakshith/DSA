class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        do{
            vector<int> res= nums;
            v.push_back(res);
        }while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};