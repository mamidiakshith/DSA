class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        for(int i=1;i< s.size()+2;i++){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return -1;
    }
};