class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,ml=INT_MAX,s=0;
        bool flag=false;
        while(r<nums.size()){
            s+=nums[r];
            while(s>=target){
                ml=min(ml,r-l+1);
                s-=nums[l];
                l++;
                flag=true;
            }
            r++;
        }
        if(flag==false){
            return 0;
        }else{
        return ml;
        }
    }
};