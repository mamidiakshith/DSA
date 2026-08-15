class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool flag=false;
        for(int num:nums){
            x^=num;
            if(num!=0){
                flag=true;
            }
        }
        if(x!=0){
            return nums.size();
        }
        if(flag){
        return nums.size()-1;
        }
        return 0;
    }
};