class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,f=0,mc=0,zc=0;
        while(r<nums.size()){
            if(nums[r]==0)zc++;
            while(zc>k){
                if(nums[f]==0)zc--;
                f++;
            }
            mc=max(mc,r-f+1);
            r++;
        }
        return mc;

    }
};