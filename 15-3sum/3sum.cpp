class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int i=0;
        while(i<nums.size()){
            if(i!=0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int s=nums[i]+nums[j]+nums[k];
                if(s>0){
                    k--;
                }
                else if(s<0){
                    j++;
                }
                else{
                    vector<int>v={nums[i],nums[j],nums[k]};
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                    res.push_back(v);
                }
            }
            i++;
        }
        return res;
    }
};