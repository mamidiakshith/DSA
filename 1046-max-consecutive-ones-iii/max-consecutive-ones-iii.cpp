class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,zc=0;
        int mc=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zc++;
            }
            while(zc>k){
                if(nums[l]==0){
                    zc--;
                }
                l++;
            }
            mc=max(mc,r-l+1);
            r++;
        }
        return mc;
    }
};