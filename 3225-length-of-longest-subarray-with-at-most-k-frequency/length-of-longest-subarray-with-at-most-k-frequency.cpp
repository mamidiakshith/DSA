class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int l=0,r=0,ml=0;
        while(r<nums.size()){
            m[nums[r]]++;
            while(m[nums[r]]>k){
                m[nums[l]]--;
                l++;
            }
            ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};