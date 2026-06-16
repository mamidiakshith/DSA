class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if (i > 0 && nums[i] == nums[i - 1]){
                i++;
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                    res.push_back(temp);
                    j++;
                    k--;
                }
            }
            i++;
        }
        return res;
    }
};