class Solution {
public:
    int atmost(vector<int>&nums,int k){
        map<int,int>m;
        int r=0,l=0;
        int c=0;
        while(r<nums.size()){
            m[nums[r]]++;
            while(m.size()>k){
                m[nums[l]]--;
                if(m[nums[l]]==0){
                    m.erase(nums[l]);
                }
                l++;
            }
                c+= (r-l+1);
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};